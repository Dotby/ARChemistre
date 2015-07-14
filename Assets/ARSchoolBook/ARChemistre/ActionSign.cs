using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ActionSign : MonoBehaviour {

	public Image loader;
	public float procces = 0f;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		loader.fillAmount = procces / 100.0f;
	}
}
