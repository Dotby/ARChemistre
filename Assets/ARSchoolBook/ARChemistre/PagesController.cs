using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class PagesController : MonoBehaviour {

	public int pageNum = -1;
	//public Page activePage = null;

	public Text questTxt;

	public string selectedbook = "";

	public string book{
		get{
			return selectedbook;
		}

		set{
			selectedbook = value;
			GameObject.Find("SceneControl").GetComponent<BookSelect>().tex.text = GameObject.Find("SceneControl").GetComponent<BookSelect>().EngToRusName(value);
		}
	}

	public void ExitScene(){
		if (GameObject.Find("Manager")){
			Destroy(GameObject.Find("Manager") as Object);
		}
		Application.LoadLevel("SchoolBag");
	}

	public Text infoTxt;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {

	}
}
