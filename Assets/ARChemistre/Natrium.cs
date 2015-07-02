using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Natrium : MonoBehaviour {

	public AudioClip bubble = null;
	public AudioClip gas = null;

	public ParticleSystem[] ps; 
	public ParticleSystem smoke;

	AudioSource player;

	public bool onFire = false;
	public float tp = 0.0f;
	public bool inWater = false;

	public Text infoTxt;
	public GameObject water;

	// Use this for initialization
	void Start () {

		player = gameObject.AddComponent<AudioSource>();

		player.playOnAwake = false;
	}

	void OnTriggerStay(Collider other) {
		if (other.gameObject.name == "fire" && onFire == false){
			onFire = true;
			StartBoil();
		}

		if (other.gameObject.name == "fluid_cup" && inWater == false){
			inWater = true;
			if (tp > 0){
				tp -= 0.1f;
				player.Stop(); 
				ps[0].Stop(); 
				ps[1].Stop();
				PlaySnd(gas);
				PlaySnd(gas);
			}

			if (tp > 3){
				water.GetComponent<Renderer>().sharedMaterial.color = Color.red;
			}
		}
	}

	void OnTriggerExit(Collider other) {
		if (other.gameObject.name == "fire" && onFire == true){
			onFire = false;
		}

		if (other.gameObject.name == "fluid_cup"){
			inWater = false;
			infoTxt.text = "";
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
		smoke.Play();
	}

	void Update () {
		
		ps[0].startSpeed = 25.0f - (25.0f - (tp * 10.0f));
		ps[0].startSize = (100.0f - (100.0f - (tp * 10.0f)))/1.2f;
		//ps[1].startSpeed = 100.0f - (100.0f - (tp * 10.0f));

		if (tp > 2 && ps[1].isPlaying == false){
			ps[1].Play();
		}

		if (tp < 2 && ps[1].isPlaying == true){
			ps[1].Stop();
		}

		if (onFire == true){
			if (tp < 10.0f){
				tp += 0.01f;
				player.volume = tp / 10.0f;
				//player.volume = 10.0f / (10.0f - tp);
			}
		}
		else
		{
			if (tp > 0.0f){
				tp -= 0.01f;
				player.volume = tp / 10.0f;
			}
		}

		if (tp < 0) {tp = 0;}
		if (tp == 0) {if (onFire == false) {player.Stop(); ps[0].Stop(); ps[1].Stop();}}
	}
}
