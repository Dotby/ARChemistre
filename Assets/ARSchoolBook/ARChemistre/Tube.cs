using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Tube : MonoBehaviour {

	public GameObject pointer;
	public string chemistry = "noon";
	public bool isImActive = false;
	public ChemistryPage _PAGE = null;
	public GameObject chemObj = null;
	public float temperature = 0.0f;

	/// <summary>
	/// The bubble.
	/// </summary>
	public AudioClip bubble = null;
	public AudioClip gas = null;
	public AudioClip mix = null;

	AudioSource player;
	
	public bool onFire = false;
	public bool inWater = false;

	public GameObject water;
	/// <summary>
	/// The ps.
	/// </summary>
	
	public ParticleSystem[] ps; 

	// Use this for initialization
	void Start () {

		player = gameObject.AddComponent<AudioSource>();
		player.playOnAwake = false;


		_PAGE = gameObject.transform.root.gameObject.GetComponent<ChemistryPage>();
		pointer.SetActive(false);
	}
	
	// Update is called once per frame
	void Update () {
		ps[0].startSpeed = 25.0f - (25.0f - (temperature * 10.0f));
		ps[0].startSize = (100.0f - (100.0f - (temperature * 10.0f)))/1.2f;
		//ps[1].startSpeed = 100.0f - (100.0f - (temperature * 10.0f));

		if (temperature > 2 && ps[1].isPlaying == false){
			ps[1].Play();
		}

		if (temperature < 2 && ps[1].isPlaying == true){
			ps[1].Stop();
		}

		if (onFire == true){
			if (temperature < 10.0f){
				temperature += 0.01f;
				player.volume = temperature / 10.0f;
				//player.volume = 10.0f / (10.0f - temperature);
			}
		}
		else
		{
			if (temperature > 0.0f){
				temperature -= 0.01f;
				player.volume = temperature / 10.0f;
			}
		}

		if (temperature < 0) {temperature = 0;}
		if (temperature == 0 && player.clip != mix) {if (onFire == false) {player.Stop(); ps[0].Stop(); ps[1].Stop();}}
	}

	void OnTriggerStay(Collider other) {
		if (isImActive == false) {return;}
		Debug.Log(other.gameObject.name);
		if (other.gameObject.name == "pointer"){
			_PAGE._PC.actionViewer.gameObject.SetActive(true);
			if (_PAGE._PC.actionViewer.procces < 100f){

				_PAGE._PC.actionViewer.procces += 1f;

			}
			else{

				_PAGE._PC.actionViewer.procces = 0f;
				_PAGE._PC.actionViewer.gameObject.SetActive(false);

				_PAGE.NewAction("mix " + other.transform.parent.gameObject.GetComponent<Tube>().chemistry);

				other.transform.parent.gameObject.GetComponent<Tube>().chemistry = GetComponent<Tube>().chemistry + "+" + other.transform.parent.gameObject.GetComponent<Tube>().chemistry;

				GetComponent<Tube>().chemistry = "(пусто)";
				chemObj.SetActive(false);

				player.Stop();
				player.clip = null; 

				_PAGE._HAND.GetPut();
			}
		}


		if (other.gameObject.name == "fire" && onFire == false){
			onFire = true;
			StartBoil();
		}
		
		if (other.gameObject.name == "fluid_cup" && inWater == false){
			inWater = true;
			if (temperature > 0){
				temperature -= 0.2f;
				player.Stop(); 
				ps[0].Stop(); 
				ps[1].Stop();
				PlaySnd(gas);
			}
			
//			if (temperature > 3){
//				water.GetComponent<Renderer>().sharedMaterial.color = Color.red;
//			}
		}
	}

	public void PlaySnd(AudioClip snd){
		if (snd != null){
			player.clip = snd;
			player.Play();
		}
	}
	
	public void StartBoil(){
		PlaySnd(bubble);
		player.loop = true;
		ps[0].Play();
	}
	
	void StartGas(){
		PlaySnd(gas);
		player.loop = true;
		ps[1].Play();
		//smoke.Play();
	}

	void OnTriggerEnter(Collider other){
		if (isImActive == false) {return;}
		if (other.gameObject.name == "pointer"){
			Debug.Log("ENTER IN POINTER");
				if (player.isPlaying == false){
					player.clip = mix; 
					player.Play();
				}
		}
	}

	void OnTriggerExit(Collider other) {
		if (isImActive == false) {return;}
		//Debug.Log("Смешивание остановленно " + other.gameObject.name);
		if (other.gameObject.name == "pointer"){
			if (player.isPlaying == true){player.Pause();}
			_PAGE._PC.actionViewer.procces = 0f;
			_PAGE._PC.actionViewer.gameObject.SetActive(false);
		}

		if (other.gameObject.name == "fire" && onFire == true){
			onFire = false;
			_PAGE.NewAction("hot " + (int)temperature);
		}
		
		if (other.gameObject.name == "fluid_cup"){
			inWater = false;

			_PAGE.NewAction("water " + (int)temperature);
		}
	}
}
