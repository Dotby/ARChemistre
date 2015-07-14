using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class BookSelect : MonoBehaviour {

	public Text tex;

	public void LoadBook(){
		DontDestroyOnLoad(GameObject.Find("Manager") as Object);
		if (GameObject.Find("Manager").GetComponent<PagesController>().book != ""){
			Application.LoadLevel(GameObject.Find("Manager").GetComponent<PagesController>().book);
		}
	}

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public string EngToRusName(string name){
		switch(name){
		case "Chemistry": return "Химия 9 класс"; break;
		case "History": return "История 9 класс"; break;
		case "Geometry": return "Геометрия 7 класс"; break;
		default: return "---"; break;
		}
	}
}
