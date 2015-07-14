using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Vuforia;


public class ChemistryPage : MonoBehaviour {

	public int pageNum = -1;
	public int actionNum = 0;
	public HandEmulator _HAND = null;
	public ChemistryControl _PC = null;
	public ChemistryPage _PAGE = null;
	public bool lessonEnd = false;

	public GameObject[] activeObjects;

	public string[] goalActions =
	{
		"get Na",
		"mix Cl",
		"get Na+Cl",
		"hot 2",
		"water 0",
	};

	// Use this for initialization
	void Start () {
		GameObject mng = GameObject.Find("SceneControl");
		_HAND = mng.GetComponent<HandEmulator>();
		_PC = mng.GetComponent<ChemistryControl>();

		NextQuest();
	}

	public bool IsActive(GameObject obj){
		foreach(GameObject gg in activeObjects){
			if (obj == gg) {return true;}
		}
		
		return false;
	}

	public void NewAction(string action){
		if (actionNum >= goalActions.Length) {return;}

		Debug.Log("Detect action: " + action + " need: " + goalActions[actionNum]);

		if (action == goalActions[actionNum]){

			string[] currAction = goalActions[actionNum].Split(' ');
			string actionObj = "";
			if (currAction.Length > 1){
				actionObj = currAction[1];
				action = currAction[0];
			}

			if (action == "hot"){
				if ((int)_HAND.item.GetComponent<Tube>().temperature >= int.Parse(actionObj))
				{
					actionNum ++;
					if (actionNum > goalActions.Length) {actionNum = goalActions.Length;}
					NextQuest();
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
				if ((int)_HAND.item.GetComponent<Tube>().temperature <= int.Parse(actionObj))
				{
					actionNum ++;
					if (actionNum > goalActions.Length) {actionNum = goalActions.Length;}
					NextQuest();
					_PC.ShowOk();
					if (actionNum == goalActions.Length)
					{
						EndLesson();
					}
					return;

				}else {return;}
			}
			

			actionNum ++;
			if (actionNum > goalActions.Length) {actionNum = goalActions.Length;}
			NextQuest();
			_PC.ShowOk();
		}
		else{
			Debug.Log("ТЫ СДЕЛАЛ ЧТО-ТО НЕ ТАК. БУДЬ ВНИМАТЕЛЬНЕЕ И ПОПРОБУЙ СНОВА:)");
		}

	}
	
	public void EndLesson(){
		if (_HAND.item != null)
		{
			_HAND.GetPut();
		}

		_PC.DownText = "Оценка: 5+";
		_PC.questTxt.text = "ЗАДАНИЕ ВЫПОЛНЕННО!";
		lessonEnd = true;
	}

	// Update is called once per frame
	void Update () {
		
	}

	void NextQuest(){

		if (actionNum == goalActions.Length)
		{
			EndLesson();
			return;
		}

		string questTxt = "";

		string actionObj = "";

		string[] currAction = goalActions[actionNum].Split(' ');

		if (currAction.Length > 1){
			actionObj = currAction[1];
		}

		switch (currAction[0]){
		case "get": questTxt = "Возьмите " + actionObj + "."; break;
		case "mix": questTxt = "Смешайте с " + actionObj + "."; break;
		case "hot": questTxt = "Нагрейте раствор до " + actionObj + " градусов."; break;
		case "water": questTxt = "Охладите раствор в воде до " + actionObj + " градусов."; break;
		default: break;
		}

		_PC.questTxt.text = questTxt;
	}
}
