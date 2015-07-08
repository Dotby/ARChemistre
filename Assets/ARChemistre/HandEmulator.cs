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
	public Vector3 startScale;

	public Page _PAGE = null;
	public PagesController _PC = null;
	
	void Start () {
	//	foreach(GameObject rb in activeObjects){
		//	rb.GetComponent<Rigidbody>().isKinematic = true;
		//}

		_PC = GetComponent<PagesController>();
		infoTxt = _PC.infoPanelText;
	}

	bool IsActive(GameObject obj){
		foreach(GameObject gg in activeObjects){
			if (obj == gg) {return true;}
		}

		return false;
	}

	public void SendActionToPage(string act){
		_PAGE.NewAction(act);
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


						item = hit.transform.gameObject;
						item.GetComponent<Tube>().pointer.SetActive(true);

						infoTxt.text = "Пробирка " + item.GetComponent<Tube>().chemistry;

						//hit.transform.gameObject.GetComponent<Renderer>().material.color = Color.green;
					}
				}
				else{
					if (lastItem != null){
						lastItem.GetComponent<Tube>().pointer.SetActive(false);
						//lastItem.gameObject.GetComponent<Renderer>().material.color = Color.white;
					}

					infoTxt.text = "Выберите объект для действия.";
					item = null;
				}
			}
			else
			{
				if (lastItem != null){
					lastItem.gameObject.GetComponent<Renderer>().material.color = Color.white;
				}

				infoTxt.text = "Выберите объект для действия.";
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
		startScale = item.transform.localScale;
		startParent = item.transform.parent;
	}

	void ActivePointers(){
		foreach(GameObject gg in activeObjects){
			if (item == gg) {continue;}

			gg.GetComponent<Tube>().pointer.SetActive(true);
			gg.GetComponent<Tube>().pointer.transform.localRotation = Quaternion.Euler(new Vector3(90f, 0f, 0f));
			//gg.GetComponent<Tube>().pointer.GetComponent<Renderer>().material.color = Color.yellow;
		}
	}

	void HidePointers(){
		foreach(GameObject gg in activeObjects){
			gg.GetComponent<Tube>().pointer.transform.localRotation = Quaternion.Euler(new Vector3(270f, 0f, 0f));
			gg.GetComponent<Tube>().pointer.SetActive(false);
			//gg.GetComponent<Tube>().pointer.GetComponent<Renderer>().material.color = Color.green;
		}
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
				item.GetComponent<Tube>().isImActive = true;

				SendActionToPage("get " + item.GetComponent<Tube>().chemistry);

				ActivePointers();

				_PC.showChemInfo = true;
				//item.GetComponent<Rigidbody>().isKinematic = true;
			}
		}
		else{
			//item.GetComponent<Rigidbody>().isKinematic = false;
			AudioSource.PlayClipAtPoint(getSnd, Vector3.zero);
			item.transform.SetParent(startParent);
			item.transform.localPosition = startPos;
			item.transform.localRotation = startRot;
			item.transform.localScale = startScale;
			item.GetComponent<Tube>().isImActive = false;
			item.GetComponent<Tube>().pointer.SetActive(false);
			//SendActionToPage("put");
			inHand = null;
			item = null;
			_PC.infoPanelText.text = "Выберите объект для действия.";
			_PC.showChemInfo = false;
			HidePointers();
		}
	}
}
