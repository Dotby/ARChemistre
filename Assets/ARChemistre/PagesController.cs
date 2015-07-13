﻿using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class PagesController : MonoBehaviour {

	public int pageNum = -1;
	public Page activePage = null;
	public ActionSign actionViewer = null;
	public Image okSign = null;
	public bool showOK;
	public float waitTime = 1.0f;
	public bool showChemInfo = false;

	public Text questTxt;

	public Text infoTxt;
	public string DownText {
		get{
			return infoTxt.text;
		}
		
		set{
			if (activePage == null) return;
			if (activePage.lessonEnd == false){
				infoTxt.text = value;
			}
		}
	}

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
			DownText = "Вещество: " + activePage._HAND.item.GetComponent<Tube>().chemistry + "\nt = " + activePage._HAND.item.GetComponent<Tube>().temperature.ToString("F2");;
		}
	}

	public void ShowOk(){
		if (showOK == true) {return;}
		okSign.enabled = true;
		showOK = true;
	}
}
