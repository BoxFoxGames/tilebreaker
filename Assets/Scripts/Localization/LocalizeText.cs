using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using UnityEngine;
using UnityEngine.UI;

public class LocalizeText : MonoBehaviour {

	public string key;
	public bool shouldUpdate;
	public List<string> variables = new List<string>();


	void Start () {
		if(LocalizeManager.GetInstance().GetTranslationOf(key) != null) {
			GetComponent<Text>().text = LoadTranslationWithVariables(key);
		} else {
			shouldUpdate = false;
		}
	}

	void Update () {
		if(shouldUpdate) {
			GetComponent<Text>().text = LoadTranslationWithVariables(key);
		}
	}

	private string LoadTranslationWithVariables(string key) {
		string translation = LocalizeManager.GetInstance().GetTranslationOf(key);
		
		int i = 0;
		var regex = new Regex(Regex.Escape("{X}"));
		while(translation.Contains("{X}")) {
			translation = regex.Replace(translation, variables[i], 1);
			i++;
		}

		return translation;
	}
}
