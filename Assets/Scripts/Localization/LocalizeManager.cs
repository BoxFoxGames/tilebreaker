using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class LocalizeManager {

	private Dictionary<string, string> dictionary = new Dictionary<string, string>();
	private static LocalizeManager Instance { set; get; }

	public static LocalizeManager GetInstance() {
		if(Instance == null) {
			Instance = new LocalizeManager();
		}
		return Instance;
	}

	public LocalizeManager() {
		setDictionary();
	}

	public string GetTranslationOf(string key) {
		if(!dictionary.ContainsKey(key)) {
			return null;
		}

		return dictionary[key];
	}

	private void setDictionary() {
		Dictionary<string, string> strings = new Dictionary<string, string>();

		TextAsset translatedStrings = (TextAsset)Resources.Load("Localization/" + GetCountryName());

		using (StringReader sr = new StringReader(translatedStrings.text))
        {
            string line = sr.ReadLine();
			while(line != null) {
				string[] words = line.Split(' ');
				strings.Add(words[0], GetSentence(words));
				line = sr.ReadLine();
			}
        }

		this.dictionary = strings;
	}

    private string GetSentence(string[] words)
    {
        string sentence = "";
		for(int i = 1; i < words.Length; i++) {
			sentence += words[i];
			if(i != words.Length - 1) {
				sentence += " ";
			}
		}

		return sentence;
    }

    private string GetCountryName() {
		switch(Player.GetInstance().Language) {
			case Languages.GERMAN:
				return "german";
			default:
				return "english";
		}
	}

	public void SetLanguage(Languages language) {
		Player.GetInstance().Language = language;
		setDictionary();
	}
}
