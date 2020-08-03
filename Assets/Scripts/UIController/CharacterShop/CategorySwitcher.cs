using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CategorySwitcher : MonoBehaviour {

	public GameObject humanContainer;
	public CharacterShopScrollMenu humanController;
	public GameObject fantasyContainer;
	public CharacterShopScrollMenu fantasyController;
	public GameObject animalContainer;
	public CharacterShopScrollMenu animalController;

	public void ShowHumanCharacter() {
		fantasyContainer.SetActive(false);
		animalContainer.SetActive(false);
		humanContainer.SetActive(true);
		humanController.SetupCharacterInfosIfAvailable();
	}

	public void ShowFantasyCharacter() {
		humanContainer.SetActive(false);
		animalContainer.SetActive(false);
		fantasyContainer.SetActive(true);
		fantasyController.SetupCharacterInfosIfAvailable();
	}

	public void ShowAnimalCharacter() {
		fantasyContainer.SetActive(false);
		humanContainer.SetActive(false);
		animalContainer.SetActive(true);
		animalController.SetupCharacterInfosIfAvailable();
	}
}
