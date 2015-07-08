using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Vuforia;


public class Page : MonoBehaviour {

	public int pageNum = -1;
	public int actionNum = 0;
	public HandEmulator _HAND = null;
	public PagesController _PC = null;

	public string[] goalActions =
	{
		"get Na",
		"mix Cl",
		"get Na+Cl",
		"hot",
		"2",
		"water",
		"0"
	};

	// Use this for initialization
	void Start () {
		GameObject mng = GameObject.Find("Manager");
		_HAND = mng.GetComponent<HandEmulator>();
		_PC = mng.GetComponent<PagesController>();
	}

	public void NewAction(string action){
		if (actionNum >= goalActions.Length) {return;}

		Debug.Log("Detect action: " + action + " need: " + goalActions[actionNum]);

		if (action == goalActions[actionNum]){

			if (action == "hot"){
				if ((int)_HAND.item.GetComponent<Tube>().temperature >= int.Parse(goalActions[actionNum +1]))
				{
					actionNum += 2;
					if (actionNum > goalActions.Length - 1) {actionNum = goalActions.Length - 1;}
					_PC.ShowOk();
					if (actionNum == goalActions.Length)
					{
						EndLesson();
					}
					return;
				}
				else {return;}

			}

			if (action == "water"){
				if ((int)_HAND.item.GetComponent<Tube>().temperature <= int.Parse(goalActions[actionNum +1]))
				{
					actionNum += 2;
					if (actionNum > goalActions.Length - 1) {actionNum = goalActions.Length - 1;}
					_PC.ShowOk();
					if (actionNum == goalActions.Length)
					{
						EndLesson();
					}
					return;

				}else {return;}
			}
			

			actionNum ++;
			if (actionNum > goalActions.Length - 1) {actionNum = goalActions.Length - 1;}
			_PC.ShowOk();
		}
		else{
			Debug.Log("ТЫ СДЕЛАЛ ЧТО-ТО НЕ ТАК. БУДЬ ВНИМАТЕЛЬНЕЕ И ПОПРОБУЙ СНОВА:)");
		}

		if (actionNum == goalActions.Length - 1)
		{
			EndLesson();
		}
	}
	
	public void EndLesson(){
		_PC.infoPanelText.text = "ЗАДАНИЕ ВЫПОЛНЕННО!";
		//Debug.Log("ЗАДАНИЕ ВЫПОЛНЕННО!");
	}

	// Update is called once per frame
	void Update () {
	
	}
}
