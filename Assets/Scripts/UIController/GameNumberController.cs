using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameNumberController : MonoBehaviour {

	private LocalizeText gameNumberLocalizeText; 
	private List<string> gameNumber;

	void Start () {
		gameNumberLocalizeText = GetComponent<LocalizeText>();
	}
	
	void Update () {
		gameNumber = new List<string>();
		gameNumber.Add((Player.GetInstance().ActualGame.Chapter.AllGames.IndexOf(Player.GetInstance().ActualGame) + 1).ToString());
		gameNumberLocalizeText.variables = gameNumber;
	}
}
