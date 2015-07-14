using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ChemistryControl : MonoBehaviour {

	public ActionSign actionViewer = null;
	public Image okSign = null;
	public bool showOK = false;
	public float waitTime = 1.0f;
	public bool showChemInfo = false;

	public ChemistryPage activePage = null;
	public int pageNum = -1;

	public Text questTxt;
	
	public Text infoTxt;

	public HandEmulator _HAND;

	public string DownText {
		get{
			return infoTxt.text;
		}
		
		set{
			infoTxt.text = value;
		}
	}
	
	// Use this for initialization
	void Start () {
		
	}

	public void ExitScene(){
		Application.LoadLevel("SchoolBag");
	}
	
	// Update is called once per frame
	void Update () {
		if (showOK == true)
		{
			okSign.fillAmount += 1.0f / waitTime * Time.deltaTime;
			if (okSign.fillAmount >= 1f) {
				okSign.fillAmount = 0f; 
				okSign.enabled = false;
				showOK = false;
			}
		}
		
		
		if (showChemInfo == true)
		{
			DownText = "Вещество: " + _HAND.item.GetComponent<Tube>().chemistry + "\nt = " + _HAND.item.GetComponent<Tube>().temperature.ToString("F2");;
		}
	}
	
	public void ShowOk(){
		if (showOK == true) {return;}
		okSign.enabled = true;
		showOK = true;
	}
}
