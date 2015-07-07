using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class HandEmulator : MonoBehaviour {

	public GameObject item = null;
	public GameObject lastItem = null;
	public GameObject inHand = null;
	public GameObject hand = null;

	public Camera cam = null;

	public GameObject[] activeObjects;

	public Text infoTxt;

	public AudioClip getSnd;
	GameObject lastObj = null;

	//public int rayLength = 500;

	public Transform startParent;
	public Vector3 startPos;
	public Quaternion startRot;
	
	void Start () {
	//	foreach(GameObject rb in activeObjects){
		//	rb.GetComponent<Rigidbody>().isKinematic = true;
		//}
	}

	bool IsActive(GameObject obj){
		foreach(GameObject gg in activeObjects){
			if (obj == gg) {return true;}
		}

		return false;
	}


	void Update () {
	
		Ray ray = cam.ViewportPointToRay(new Vector3(0.5F, 0.5F, 0));
		RaycastHit hit;
		if (inHand == null){
			if (Physics.Raycast(ray, out hit)){
				if (IsActive(hit.transform.gameObject) == true)
				{
					if (item != lastItem || (item == null && lastItem == null)){
						lastItem = item;
						infoTxt.text = "Пробирка";

						item = hit.transform.gameObject;
						item.GetComponent<Tube>().pointer.SetActive(true);
						hit.transform.gameObject.GetComponent<Renderer>().material.color = Color.green;
					}
				}
				else{
					if (lastItem != null){
						lastItem.GetComponent<Tube>().pointer.SetActive(false);
						lastItem.gameObject.GetComponent<Renderer>().material.color = Color.white;
					}

					infoTxt.text = "";
					item = null;
				}
			}
			else
			{
				if (lastItem != null){
					lastItem.gameObject.GetComponent<Renderer>().material.color = Color.white;
				}

				infoTxt.text = "";
				item = null;
			}
		}


		//float lerp = Mathf.PingPong(Time.time, duration) / duration;
		//rend.material.color = Color.Lerp(colorStart, colorEnd, lerp);
	}

	public void FoundMarker(GameObject obj){
		if (lastObj == obj) {return;}

		if (lastObj != null){
			//lastObj.SetActive(false);
		}

		lastObj = obj;
		//lastObj.GetComponent<
		//lastObj.SetActive(true);
	}

	void SaveItemCoords(GameObject item)
	{
		startPos = item.transform.localPosition;
		startRot = item.transform.localRotation;
		startParent = item.transform.parent;
	}

	public void GetPut(){
	if (inHand == null){
			if (item != null){
				AudioSource.PlayClipAtPoint(getSnd, Vector3.zero);
				inHand = item;
				SaveItemCoords(item);
				item.gameObject.GetComponent<Renderer>().material.color = Color.white;
				item.transform.SetParent(hand.transform);
				item.GetComponent<Tube>().pointer.SetActive(true);
				//item.GetComponent<Rigidbody>().isKinematic = true;
			}
		}
		else{
			//item.GetComponent<Rigidbody>().isKinematic = false;
			item.transform.SetParent(startParent);
			item.transform.localPosition = startPos;
			item.transform.localRotation = startRot;
			item.GetComponent<Tube>().pointer.SetActive(false);
			inHand = null;
			item = null;
		}
	}
}
