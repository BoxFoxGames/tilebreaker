using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CharacterShopScrollMenu : MonoBehaviour
{

    [Serializable]
    public class CharacterValues
    {
        public string characterName;
        public GameObject characterGameObject;
        public Character character;
    }

    public int lockOnSpeed;
    public GameObject scrollMenu;
    public ScrollPointsController scrollPointsController;
    public List<CharacterValues> characterValues;
    public int firstCharacterBorder;
    public Text characterTitle;
    public GameObject buyButton;
    public GameObject selectButton;
    public GameObject selectedText;
    public int spaceBetweenCharacter;
    public AudioSource buttonClickAudio;
    public AudioSource buyAudio;
    public AudioSource buttonDisabledAudio;

    private bool isMousePressed;
    private bool isTouched;
    private Vector3 scrollMenuPosition;
    private int[] anchorPoints;
    private int[] anchorBorders;
    private float scrollMenuWidth;
    private Character actualCharacter;

    private readonly OpenWindowEvents openWindowEvents = new OpenWindowEvents();

    void Start()
    {
        scrollMenuPosition = scrollMenu.gameObject.transform.localPosition;

        scrollMenuWidth = scrollMenu.transform.GetComponent<RectTransform>().sizeDelta.x;

        anchorPoints = new int[characterValues.Count];
        for (int i = 0; i < characterValues.Count; i++)
        {
            anchorPoints[i] = firstCharacterBorder + (i * spaceBetweenCharacter);
        }

        anchorBorders = new int[characterValues.Count];
        for (int i = 0; i < characterValues.Count; i++)
        {
            anchorBorders[i] = firstCharacterBorder + (i * spaceBetweenCharacter) + (spaceBetweenCharacter / 2);
        }

        SetupCharacterInfos();
        SetSelectedCharacter(false, false);
    }

    void Update()
    {
        scrollMenuPosition = scrollMenu.gameObject.transform.localPosition;

        checkIfTouched();

        lockOnToCharacter();

        if (isMousePressed || isTouched)
        {
            SetSelectedCharacter(false, false);
        }
    }

    public void SetupCharacterInfosIfAvailable()
    {
        if (scrollMenuPosition != null && anchorPoints != null)
        {
            SetCharacterInfos(characterValues.IndexOf(characterValues.Find((ci) => ci.character == actualCharacter)), false, false);
        }
    }
    private void SetupCharacterInfos()
    {
        foreach (CharacterValues characterInfo in characterValues)
        {
            characterInfo.character = Player.GetInstance().AllCharacter
                .Find(character => character.Name.Equals(characterInfo.characterName));
        }
        actualCharacter = characterValues[0].character;
        SetCharacterInfos(characterValues.Count - 1, false, false);
    }

    private void checkIfTouched()
    {
        if (Input.GetMouseButtonDown(0))
        {
            isMousePressed = true;
        }
        else if (Input.GetMouseButtonUp(0))
        {
            isMousePressed = false;
        }

        if (Input.touchCount == 0)
        {
            isTouched = false;
        }
        else
        {
            isTouched = true;
        }
    }

    private void lockOnToCharacter()
    {
        if (isMousePressed || isTouched)
        {
            return;
        }

        for (int i = 0; i < characterValues.Count; i++)
        {
            if (scrollMenuPosition.x < anchorBorders[i])
            {
                float newPos = scrollMenuPosition.x;
                Vector3 target = new Vector3(anchorPoints[i], scrollMenuPosition.y, scrollMenuPosition.z);

                float step = lockOnSpeed * Time.deltaTime;
                scrollMenuPosition = Vector3.MoveTowards(scrollMenuPosition, target, step);
                scrollMenu.transform.localPosition = scrollMenuPosition;
                scrollPointsController.SetPoint(characterValues.Count - 1 - i);
                if (!actualCharacter.Equals(characterValues[characterValues.Count - 1 - i].character))
                {
                    SetCharacterInfos(characterValues.Count - 1 - i, false, false);
                }
                return;
            }
        }
    }

    private void SetCharacterInfos(int characterIndex, bool shouldActualCharacterNod, bool shouldActualCharacterCelebrate)
    {
        SetSelectedCharacter(shouldActualCharacterNod, shouldActualCharacterCelebrate);
        actualCharacter = characterValues[characterIndex].character;
        characterTitle.GetComponent<LocalizeText>().key = actualCharacter.Name;

        if (actualCharacter.IsChoosen)
        {
            selectedText.SetActive(true);
            buyButton.SetActive(false);
            selectButton.SetActive(false);
        }
        else if (actualCharacter.isAvailable)
        {
            buyButton.SetActive(false);
            selectButton.SetActive(true);
            selectedText.SetActive(false);
            selectButton.GetComponent<Button>().onClick.RemoveAllListeners();
            selectButton.GetComponent<Button>().onClick.AddListener(() =>
            {
                buttonClickAudio.Play();
                Player.GetInstance().ChooseCharacter(actualCharacter);
                SetCharacterInfos(characterIndex, true, false);
                SaveLoadGame.SaveGame();
            });
        }
        else
        {
            selectButton.SetActive(false);
            selectedText.SetActive(false);
            buyButton.SetActive(true);
            buyButton.transform.Find("PriceText").GetComponent<Text>().text = actualCharacter.Price.ToString();
            buyButton.GetComponent<Button>().onClick.RemoveAllListeners();
            buyButton.GetComponent<Button>().onClick.AddListener(() =>
            {
                if (!actualCharacter.Buy())
                {
                    buttonDisabledAudio.Play();
                    openWindowEvents.OpenIAP(GameObject.Find("Canvas"));
                }
                else
                {
                    buyAudio.Play();
                    SetCharacterInfos(characterIndex, false, true);
                    SaveLoadGame.SaveGame();
                }
            });
        }
    }

    private void SetSelectedCharacter(bool shouldNod, bool shouldCelebrate)
    {
        bool isCharacterFound = false;
        for (int i = 0; i < characterValues.Count; i++)
        {
            if (scrollMenuPosition.x < anchorBorders[i] && !isCharacterFound)
            {
                if (shouldNod)
                {
                    characterValues[characterValues.Count - 1 - i].characterGameObject.GetComponentInChildren<Animator>().SetTrigger("nod");
                }

                if (shouldCelebrate)
                {
                    characterValues[characterValues.Count - 1 - i].characterGameObject.GetComponentInChildren<Animator>().SetTrigger("celebrate1");
                }

                characterValues[characterValues.Count - 1 - i].characterGameObject.transform.localScale = new Vector3(1.5f, 1.5f, 1.5f);
                isCharacterFound = true;
            }
            else
            {
                characterValues[characterValues.Count - 1 - i].characterGameObject.transform.localScale = new Vector3(1f, 1f, 1f);
            }
        }
    }
}
