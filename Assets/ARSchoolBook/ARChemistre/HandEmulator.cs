using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class HandEmulator : MonoBehaviour {

	public GameObject item = null;
	public GameObject lastItem = null;
	public GameObject inHand = null;
	public GameObject hand = null;

	public Camera cam = null;
	
	public AudioClip getSnd;
	GameObject lastObj = null;

	//public int rayLength = 500;

	public Transform startParent;
	public Vector3 startPos;
	public Quaternion startRot;
	public Vector3 startScale;

	public ChemistryPage _PAGE = null;
	public ChemistryControl _PC = null;
	
	void Start () {
	//	foreach(GameObject rb in activeObjects){
		//	rb.GetComponent<Rigidbody>().isKinematic = true;
		//}

		_PC = GetComponent<ChemistryControl>();
		_PAGE = _PC.activePage;
	}

	public void SendActionToPage(string act){
		_PAGE.NewAction(act);
	}


	void Update () {
	
		//if (_PC.activePage == null){return;}
		//if (_PC.activePage.lessonEnd == true) {return;}


		Ray ray = cam.ViewportPointToRay(new Vector3(0.5F, 0.5F, 0));
		RaycastHit hit;
		if (inHand == null){
			if (Physics.Raycast(ray, out hit)){
				if (_PAGE.IsActive(hit.transform.gameObject) == true)
				{
					if (item != lastItem || (item == null && lastItem == null)){
						lastItem = item;


						item = hit.transform.gameObject;
						item.GetComponent<Tube>().pointer.SetActive(true);

						_PC.DownText = "Пробирка " + item.GetComponent<Tube>().chemistry;

						//hit.transform.gameObject.GetComponent<Renderer>().material.color = Color.green;
					}
				}
				else{
					if (lastItem != null){
						lastItem.GetComponent<Tube>().pointer.SetActive(false);
						//lastItem.gameObject.GetComponent<Renderer>().material.color = Color.white;
					}

					_PC.DownText = "Выберите объект для действия.";
					item = null;
				}
			}
			else
			{
				if (lastItem != null){
					//lastItem.gameObject.GetComponent<Renderer>().material.color = Color.white;
				}

				_PC.DownText = "Выберите объект для действия.";
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
		foreach(GameObject gg in _PAGE.activeObjects){
			if (item == gg) {continue;}

			gg.GetComponent<Tube>().pointer.SetActive(true);
			gg.GetComponent<Tube>().pointer.transform.localRotation = Quaternion.Euler(new Vector3(90f, 0f, 0f));
			//gg.GetComponent<Tube>().pointer.GetComponent<Renderer>().material.color = Color.yellow;
		}
	}

	void HidePointers(){
		foreach(GameObject gg in _PAGE.activeObjects){
			gg.GetComponent<Tube>().pointer.transform.localRotation = Quaternion.Euler(new Vector3(270f, 0f, 0f));
			gg.GetComponent<Tube>().pointer.SetActive(false);
			//gg.GetComponent<Tube>().pointer.GetComponent<Renderer>().material.color = Color.green;
		}
	}

	public void GetPut(){
	if (_PC.activePage.lessonEnd == true) {return;}

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
			_PC.DownText = "Выберите объект для действия.";
			_PC.showChemInfo = false;
			HidePointers();
		}
	}
}
