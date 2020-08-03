using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SoundController : MonoBehaviour {
	private AudioSource audio;
	private Image image;

	private void Start() {
		image = GetComponent<Image>();
		audio = GetComponent<AudioSource>();
		
		if(AudioListener.volume == 0f) {
			image.sprite = Resources.Load<Sprite>( "UI/Buttons/Button_Sound_Muted" );
		} else {
			image.sprite = Resources.Load<Sprite>( "UI/Buttons/Button_Sound" );
		}
	}

	public void SwitchSound() {
		if(Player.GetInstance().SoundOn) {
			AudioListener.volume = 0f;
			image.sprite = Resources.Load<Sprite>( "UI/Buttons/Button_Sound_Muted" );
		} else {
			AudioListener.volume = 1f;
			image.sprite = Resources.Load<Sprite>( "UI/Buttons/Button_Sound" );
		}

		Player.GetInstance().SoundOn = !Player.GetInstance().SoundOn;
		SaveLoadGame.SaveGame();
	}
}
