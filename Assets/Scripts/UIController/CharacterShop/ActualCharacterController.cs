using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActualCharacterController : MonoBehaviour {

	private GameObject actualCharacterContainer;
	private Character actualCharacter;
	private readonly GameObjectLoader gameObjectLoader = new GameObjectLoader();

	void Start () {
		actualCharacterContainer = transform.Find("ActualCharacterContainer").gameObject;
		SetCharacter();
	}
	
	void Update () {
		if(!actualCharacter.Equals(Player.GetInstance().ActualCharacter)) {
			SetCharacter();
		}
	}

	private void SetCharacter() {
		DeleteExistingCharacter();
		actualCharacter = Player.GetInstance().ActualCharacter;
		GameObject characterGameObject = gameObjectLoader.GetActualCharacterShop(actualCharacter); 
		characterGameObject.transform.parent = actualCharacterContainer.transform;
		characterGameObject.transform.localPosition = new Vector3(0, -110, 0);
		characterGameObject.transform.localScale = new Vector3(5,5,5);
	}

	private void DeleteExistingCharacter() {
		foreach (Transform transform in actualCharacterContainer.GetComponentsInChildren<Transform>())
        {
            if (!transform.gameObject.Equals(actualCharacterContainer))
            {
                Destroy(transform.gameObject);
            }
        }
	}
}
