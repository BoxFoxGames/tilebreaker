using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Collections;


public class GameSceneController : MonoBehaviour
{
    public GameObject addHintButton;
    public GameObject playerContainer;
    public bool isJumpingAvailable = true;
    public GameObject activateHintImage;
    public GameObject swipeAnimation;

    private bool isTouchActive = true;
    private GameObject repeatButton;
    private Sprite hintActive;
    private Sprite hintDeactive;
    private GameObject matchfieldGameObject;
    private Game game;
    private Vector2 entryTouchPoint;
    private Vector2 lastTouchPoint;
    private GameObject playerGameObject;
    private float tileSpacing;
    private Vector3 jumpPosition;
    private List<List<GameObject>> tileGameObjects = new List<List<GameObject>>();
    private bool shouldMoveUp = true;
    private bool shouldShowHints = false;
    private Animator characterAnimator;
    private bool isLanded
    {
        get { return shouldMoveUp; }
        set
        {
            shouldMoveUp = value;
            if (!shouldMoveUp)
            {
                return;
            }
            StartCoroutine(CheckGame());
        }
    }
    private readonly GameObjectLoader gameObjectLoader = new GameObjectLoader();
    private readonly AdController adController = new AdController();
    private readonly GameSceneGameObjectsController gameSceneGameObjectsController = new GameSceneGameObjectsController();

    void Start()
    {
        StartGame();
        repeatButton = GameObject.Find("Button_Repeat");
    }

    public void StartGame()
    {
        SetHintImages();
        SetGameObjects();
        GenerateSizes();
        tileGameObjects = gameSceneGameObjectsController.GenerateSpielfeld(gameObject);
        playerGameObject.GetComponent<Transform>().localPosition = gameSceneGameObjectsController.GetTilePosition(game.ActualTile);
        playerGameObject.GetComponent<Transform>().rotation = Quaternion.AngleAxis(0, Vector3.up);

        gameSceneGameObjectsController.DeleteExistingTutorials();
        if (Player.GetInstance().AllChapter.IndexOf(game.Chapter) == 0)
        {
            gameSceneGameObjectsController.SetTutorial(game.Chapter.AllGames.IndexOf(game));
        }
        SetHintTile();
        SetHintButton();
    }

    private void SetHintImages()
    {
        hintActive = Resources.Load<Sprite>("UI/Buttons/TB_UI_Button_Hint_On");
        hintDeactive = Resources.Load<Sprite>("UI/Buttons/TB_UI_Button_Hint_Off");
    }

    private void SetGameObjects()
    {
        matchfieldGameObject = transform.gameObject;
        game = Player.GetInstance().ActualGame;
        game.SetBegin();
        if (playerGameObject != null) { Destroy(playerGameObject); }
        playerGameObject = gameObjectLoader.GetCharacter(Player.GetInstance().ActualCharacter);
    }

    private void GenerateSizes()
    {
        gameSceneGameObjectsController.GenerateSizes(game, playerGameObject.transform.localScale);
        playerGameObject.GetComponent<Transform>().parent = playerContainer.GetComponent<Transform>();
        characterAnimator = playerGameObject.GetComponentInChildren<Animator>();

        int row = game.Matchfield.Count;
        playerGameObject.transform.localScale = gameSceneGameObjectsController.GetCharacterScale();
        tileSpacing = gameSceneGameObjectsController.GetTileSpacing(game.Matchfield.Count);
    }

    void Update()
    {
        MoveToActualTile();

        if (isJumpingAvailable)
        {
            CheckKeyboardInput();
            CheckTouchInput();
        }
    }

    private void MoveToActualTile()
    {
        Vector3 actualTilePosition = gameSceneGameObjectsController.GetTilePosition(game.ActualTile);
        Vector3 actualPlayerPosition = playerGameObject.GetComponent<Transform>().localPosition;
        Vector3 actualPlayerScale = playerGameObject.GetComponent<Transform>().localScale;
        if ((actualPlayerPosition.x > actualTilePosition.x + 0.005 || actualPlayerPosition.x < actualTilePosition.x - 0.005) ||
                (actualPlayerPosition.y > actualTilePosition.y + 0.005 || actualPlayerPosition.y < actualTilePosition.y - 0.005) ||
                (actualPlayerPosition.z > actualTilePosition.z + 0.005 || actualPlayerPosition.z < actualTilePosition.z - 0.005))
        {
            if (actualPlayerPosition == jumpPosition)
            {
                shouldMoveUp = false;
                jumpPosition = actualTilePosition;
            }

            if (shouldMoveUp && playerGameObject.transform.localScale.y < gameSceneGameObjectsController.GetCharacterScale().y * 1.15)
            {
                playerGameObject.transform.localScale = new Vector3(actualPlayerScale.x,
                    actualPlayerScale.y + 0.05f, actualPlayerScale.z);
            }
            else if (playerGameObject.transform.localScale.y > gameSceneGameObjectsController.GetCharacterScale().y)
            {
                playerGameObject.transform.localScale = new Vector3(actualPlayerScale.x,
                    actualPlayerScale.y - 0.05f, actualPlayerScale.z);
            }
            float speed = 200 - ((game.Matchfield.Count - 5) * 20f);
            float step = (speed * Time.deltaTime);
            playerGameObject.transform.localPosition =
                Vector3.MoveTowards(playerGameObject.transform.localPosition,
                jumpPosition, step);
            actualPlayerPosition = playerGameObject.transform.localPosition;

            if (actualPlayerPosition == actualTilePosition)
            {
                if (!isLanded)
                {
                    isLanded = true;
                }
                playerGameObject.transform.localScale = gameSceneGameObjectsController.GetCharacterScale();
            }
        }
    }

    private void CheckTouchInput()
    {
        if (!isTouchActive)
        {
            isTouchActive = true;
            return;
        }

        foreach (Touch touch in Input.touches)
        {
            if (touch.phase == TouchPhase.Began)
            {
                entryTouchPoint = touch.position;
                lastTouchPoint = touch.position;
            }
            if (touch.phase == TouchPhase.Moved)
            {
                lastTouchPoint = touch.position;
            }
            if (touch.phase == TouchPhase.Ended)
            {
                if ((entryTouchPoint.x - lastTouchPoint.x) > 50 && Mathf.Abs(entryTouchPoint.x - lastTouchPoint.x) > Mathf.Abs(entryTouchPoint.y - lastTouchPoint.y))
                {
                    //left
                    jump(3);
                }
                else if ((entryTouchPoint.x - lastTouchPoint.x) < -50 && Mathf.Abs(entryTouchPoint.x - lastTouchPoint.x) > Mathf.Abs(entryTouchPoint.y - lastTouchPoint.y))
                {
                    //right
                    jump(1);
                }
                else if ((entryTouchPoint.y - lastTouchPoint.y) < -50 && Mathf.Abs(entryTouchPoint.x - lastTouchPoint.x) < Mathf.Abs(entryTouchPoint.y - lastTouchPoint.y))
                {
                    //up
                    jump(0);
                }
                else if ((entryTouchPoint.y - lastTouchPoint.y) > 50 && Mathf.Abs(entryTouchPoint.x - lastTouchPoint.x) < Mathf.Abs(entryTouchPoint.y - lastTouchPoint.y))
                {
                    //down
                    jump(2);
                }
            }
        }
    }

    private void CheckKeyboardInput()
    {
        if (Input.GetButtonDown("Horizontal") && Input.GetAxisRaw("Horizontal") > 0)
        {
            //right 
            jump(1);
        }
        if (Input.GetButtonDown("Horizontal") && Input.GetAxisRaw("Horizontal") < 0)
        {
            //left
            jump(3);
        }
        if (Input.GetButtonDown("Vertical") && Input.GetAxisRaw("Vertical") > 0)
        {
            //up
            jump(0);
        }
        if (Input.GetButtonDown("Vertical") && Input.GetAxisRaw("Vertical") < 0)
        {
            //down
            jump(2);
        }
    }

    private void jump(int direction)
    {
        jumpPosition = gameSceneGameObjectsController.GetTilePosition(game.ActualTile);

        float halfDistance = tileSpacing;
        float height = 10;
        playerGameObject.GetComponent<AudioSource>().pitch = 0.85f;
        if (!game.ActualTile.ToString().Equals("JumpTile"))
        {
            halfDistance = tileSpacing / 2;
            height = 20;
            playerGameObject.GetComponent<AudioSource>().pitch = 0.65f;
        }
        jumpPosition.y = gameSceneGameObjectsController.GetTilePosition(game.ActualTile).y + height;
        rotatePlayerObject(direction, halfDistance);

        Tile tile = game.Naighbors[direction];

        if (tile == null)
        {
            jumpPosition = gameSceneGameObjectsController.GetTilePosition(game.ActualTile);
            return;
        }

        DeactivateSwipeAnimation();

        if (!game.IsWon())
        {
            ActivateJumpAnimation();
            PlayJumpSound(tile);
            game.JumpToTile(tile);
            tileGameObjects = gameSceneGameObjectsController.GenerateSpielfeld(gameObject);
        }

        SetHintTile();
        SetHintButton();
    }

    private void DeactivateSwipeAnimation()
    {
        if(swipeAnimation != null) {
            swipeAnimation.SetActive(false);
        }
    }

    private void ActivateJumpAnimation()
    {
        // TODO Jump length
        characterAnimator.SetTrigger("idle");
    }

    private void PlayJumpSound(Tile tile)
    {
        if (tile.isAvailable)
        {
            playerGameObject.GetComponent<AudioSource>().Play();
        }
    }

    private void rotatePlayerObject(int direction, float halberAbstand)
    {
        switch (direction)
        {
            case 0:
                playerGameObject.GetComponent<Transform>().rotation = Quaternion.AngleAxis(180, Vector3.up);
                jumpPosition.z = gameSceneGameObjectsController.GetTilePosition(game.ActualTile).z - halberAbstand;
                break;
            case 1:
                playerGameObject.GetComponent<Transform>().rotation = Quaternion.AngleAxis(-90, Vector3.up);
                jumpPosition.x = gameSceneGameObjectsController.GetTilePosition(game.ActualTile).x - halberAbstand;
                break;
            case 2:
                playerGameObject.GetComponent<Transform>().rotation = Quaternion.AngleAxis(0, Vector3.up);
                jumpPosition.z = gameSceneGameObjectsController.GetTilePosition(game.ActualTile).z + halberAbstand;
                break;
            case 3:
                playerGameObject.GetComponent<Transform>().rotation = Quaternion.AngleAxis(90, Vector3.up);
                jumpPosition.x = gameSceneGameObjectsController.GetTilePosition(game.ActualTile).x + halberAbstand;
                break;
        }
    }

    private IEnumerator CheckGame()
    {
        if (game.IsWon())
        {
            // Animation
            characterAnimator.SetTrigger("celebrate" + (TBConstants.RANDOM.Next(1, 4)));
            ActivateReplayAndHelp(false);
            GameObject.Find("AudioWin").GetComponent<AudioSource>().Play();
            yield return new WaitForSeconds(2);
            ActivateReplayAndHelp(true);

            // Werbung
            adController.ShowVideoAd();
            Player.GetInstance().WinsWithoutAd += 1;

            // Gewonnen Anzeige
            gameSceneGameObjectsController.SetWinVisible();
            game.GamePlayed();

            // Reset Hints
            game.Hints = 0;

            //Speichern
            SaveLoadGame.SaveGame();
        }
        else if (game.IsLose())
        {
            // Animation
            characterAnimator.SetTrigger("disapointed" + (TBConstants.RANDOM.Next(1, 3)));
            ActivateReplayAndHelp(false);
            GameObject.Find("AudioLose").GetComponent<AudioSource>().Play();
            yield return new WaitForSeconds(2);
            ActivateReplayAndHelp(true);

            // Verloren Anzeige 
            gameSceneGameObjectsController.SetLoseVisible();

            // Speichern
            SaveLoadGame.SaveGame();
        }
        else
        {
            CheckHintTutorial();
        }
    }

    private void ActivateReplayAndHelp(bool isInteractable)
    {
        repeatButton.GetComponent<Button>().interactable = isInteractable;
    }

    private void CheckHintTutorial()
    {
        if (activateHintImage == null || Player.GetInstance().ActualGame.Chapter.AllGames.IndexOf(Player.GetInstance().ActualGame) != TBConstants.HINTS_TUTORIAL_GAME_INDEX
            || Player.GetInstance().HasUserPlayedHintTutorial)
        {
            return;
        }

        if (Player.GetInstance().ActualGame.Jumps == 1)
        {
            SetTutorialSecoundHint();
        }
        else if (Player.GetInstance().ActualGame.Jumps == 2)
        {
            gameSceneGameObjectsController.OpenTutorialHintDescription();
        }
    }

    public void DestroyWinLoseWindows(GameObject container)
    {
        foreach (Transform transform in container.transform)
        {
            if (transform.gameObject.name.StartsWith("Win") || transform.gameObject.name.StartsWith("Lose"))
            {
                GameObject.Destroy(transform.gameObject);
            }
        }
    }

    private void SetHintButton()
    {
        bool isHintButtonActive = game.OnCorrectWay && game.Hints == game.Jumps && !game.IsWon() && !game.IsLose();
        addHintButton.GetComponent<Image>().sprite = isHintButtonActive ? hintActive : hintDeactive;
        addHintButton.GetComponent<Button>().interactable = isHintButtonActive;
    }

    private void SetHintTile()
    {
        if (game.JumpResult.Count == 0 || game.Hints <= game.Jumps)
        {
            return;
        }
        else if (game.OnCorrectWay && !game.IsLose() && !game.IsWon())
        {
            BlinkNextTile();
        }
    }

    public void GetHintForGame()
    {
        if (game.BuyHint())
        {
            SetHintTile();
            SetHintButton();
            HideHintTutorial();
            SaveLoadGame.SaveGame();
        }
        else
        {
            gameSceneGameObjectsController.OpenHintShop();
        }
    }

    private void HideHintTutorial()
    {
        if (activateHintImage != null)
        {
            isTouchActive = false;
            isJumpingAvailable = true;
            activateHintImage.SetActive(false);
            repeatButton.SetActive(true);
        }
    }

    private void BlinkNextTile()
    {
        KeyValuePair<int, int> nextTileHint = game.JumpResult[1];
        TileBlinker blinker = gameSceneGameObjectsController
            .GetTileGameObject(game.Matchfield[nextTileHint.Key][nextTileHint.Value]).GetComponent<TileBlinker>();

        blinker.shouldBlink = true;
    }

    public void SetTutorialFirstHint()
    {
        if (activateHintImage != null)
        {
            activateHintImage.SetActive(true);
            repeatButton.SetActive(false);
            isJumpingAvailable = false;

            activateHintImage.transform.Find("ActivateHintText").GetComponent<LocalizeText>().key = "activateHint";
        }
    }

    private void SetTutorialSecoundHint()
    {
        if (activateHintImage != null && Player.GetInstance().ActualGame.Hints == 1)
        {
            activateHintImage.SetActive(true);
            repeatButton.SetActive(false);
            isJumpingAvailable = false;
            activateHintImage.transform.Find("ActivateHintText").GetComponent<LocalizeText>().key = "activateAnotherHint";
        }
    }
}