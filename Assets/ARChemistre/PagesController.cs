using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class PagesController : MonoBehaviour {

	public int pageNum = -1;
	public Page activePage = null;
	public ActionSign actionViewer = null;
	public Image okSign = null;
	public bool showOK;
	public float waitTime = 1.0f;
	public Text infoPanelText = null;
	public bool showChemInfo = false;

	// Use this for initialization
	void Start () {
	
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
			infoPanelText.text = "Вещество: " + activePage._HAND.item.GetComponent<Tube>().chemistry + "\nt = " + activePage._HAND.item.GetComponent<Tube>().temperature;
		}
	}

	public void ShowOk(){
		if (showOK == true) {return;}
		okSign.enabled = true;
		showOK = true;
	}
}
