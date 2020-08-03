using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class OpenWindowEvents : MonoBehaviour
{
    private readonly GameObjectLoader gameObjectLoader = new GameObjectLoader();
    private readonly AdController adController = new AdController();

    public void OpenGameLocked(GameObject container)
    {
        OpenBottomInfo(container, "gameNotAvailable");
    }

    public void OpenSettings(GameObject container)
    {
        if (ExistsWindow(container, "SettingsScene"))
        {
            return;
        }

        GameObject settingsScreen = gameObjectLoader.GetWindow("SettingsScene");

        settingsScreen.GetComponent<RectTransform>().parent = container.GetComponent<RectTransform>();
        settingsScreen.GetComponent<RectTransform>().localPosition = new Vector3(0, 0, -200);
        settingsScreen.GetComponent<RectTransform>().localScale = new Vector3(0.8f, 0.8f, 0.8f);

        settingsScreen.transform.Find("CloseButton").GetComponent<Button>().onClick.AddListener(() =>
        {
            GameObject.Find("AudioSourceClick").GetComponent<AudioSource>().Play();
            Destroy(settingsScreen);

        });

        settingsScreen.transform.Find("LanguageArea").transform.Find("GermanButton").GetComponent<Button>().onClick.AddListener(() =>
        {
            LocalizeManager.GetInstance().SetLanguage(Languages.GERMAN);
            SaveLoadGame.SaveGame();
        });

        settingsScreen.transform.Find("LanguageArea").transform.Find("EnglishButton").GetComponent<Button>().onClick.AddListener(() =>
        {
            LocalizeManager.GetInstance().SetLanguage(Languages.ENGLISH);
            SaveLoadGame.SaveGame();
        });

        settingsScreen.transform.Find("PrivacyPolicy").GetComponent<Button>().onClick.AddListener(() =>
        {
            GameObject.Find("AudioSourceClick").GetComponent<AudioSource>().Play();
            Application.OpenURL("http://boxfox-games.de/tilebreaker-privacy-policy/");
        });
    }

    private bool ExistsWindow(GameObject container, string windowName)
    {
        foreach (Transform transform in container.GetComponentsInChildren<Transform>())
        {
            if (transform.gameObject.name.StartsWith(windowName))
            {
                return true;
            }
        }

        return false;
    }

    public void OpenIAP(GameObject container)
    {
        if (ExistsWindow(container, "IAP"))
        {
            return;
        }

        DestroyIfExists(container, "HintShop");

        GameObject iap = gameObjectLoader.GetWindow("IAP");

        iap.GetComponent<RectTransform>().parent = container.GetComponent<RectTransform>();
        float scale = container.name.Equals("CharacterUI") ? 0.7f : 1.4f;
        iap.GetComponent<RectTransform>().localScale = new Vector3(scale, scale, scale);
        iap.GetComponent<RectTransform>().localPosition = new Vector3(0, 0, -500);

        iap.transform.Find("ExitButton").GetComponent<Button>().onClick.AddListener(() =>
        {
            GameObject.Find("AudioSourceClick").GetComponent<AudioSource>().Play();
            Destroy(iap);
        });

        if (!Player.GetInstance().ShouldShowAds)
        {
            Destroy(iap.transform.Find("RemoveAds").gameObject);
        }

        SetIAPPrices(iap);
    }

    private void SetIAPPrices(GameObject iap)
    {
        if (IAPManager.Instance.GetPriceFor(IAPManager.TB_100Coins) == null)
        {
            return;
        }

        iap.transform.Find("100Coins").Find("Buy100CoinsButton").Find("Text").GetComponent<Text>().text
            = IAPManager.Instance.GetPriceFor(IAPManager.TB_100Coins);
        iap.transform.Find("200Coins").Find("Buy200CoinsButton").Find("Text").GetComponent<Text>().text
            = IAPManager.Instance.GetPriceFor(IAPManager.TB_200Coins);
        iap.transform.Find("500Coins").Find("Buy500CoinsButton").Find("Text").GetComponent<Text>().text
            = IAPManager.Instance.GetPriceFor(IAPManager.TB_500Coins);
        iap.transform.Find("1000Coins").Find("Buy1000CoinsButton").Find("Text").GetComponent<Text>().text
            = IAPManager.Instance.GetPriceFor(IAPManager.TB_1000Coins);
        iap.transform.Find("RemoveAds").Find("RemoveAdsButton").Find("Text").GetComponent<Text>().text
            = IAPManager.Instance.GetPriceFor(IAPManager.TB_REMOVE_ADS);
    }

    public void OpenHintShop(GameObject container)
    {
        if (ExistsWindow(container, "HintShop"))
        {
            return;
        }

        DestroyIfExists(container, "IAP");

        GameObject hintShop = gameObjectLoader.GetWindow("HintShop");

        hintShop.GetComponent<RectTransform>().parent = container.GetComponent<RectTransform>();
        hintShop.GetComponent<RectTransform>().localScale = new Vector3(1.4f, 1.4f, 1.4f);
        hintShop.GetComponent<RectTransform>().localPosition = new Vector3(0, 0, -200);

        hintShop.transform.Find("ExitButton").GetComponent<Button>().onClick.AddListener(() =>
        {
            GameObject.Find("AudioSourceClick").GetComponent<AudioSource>().Play();
            Destroy(hintShop);
        });
    }

    public void OpenGameHelp(GameObject container)
    {
        if (ExistsWindow(container, "GameHelp"))
        {
            return;
        }

        GameObject go = gameObjectLoader.GetWindow("GameHelp");

        go.GetComponent<RectTransform>().parent = container.transform;
        go.GetComponent<RectTransform>().localPosition = new Vector3(0f, 0f, 0f);
        go.GetComponent<RectTransform>().localScale = new Vector3(1.4f, 1.4f, 1.4f);

        go.transform.Find("ExitButton").GetComponent<Button>().onClick.AddListener(() =>
        {
            GameObject.Find("AudioSourceClick").GetComponent<AudioSource>().Play();
            Destroy(go);
        });
    }

    private void DestroyIfExists(GameObject container, string windowName)
    {
        foreach (Transform transform in container.GetComponentsInChildren<Transform>())
        {
            if (transform.gameObject.name.StartsWith(windowName))
            {
                Destroy(transform.gameObject);
            }
        }
    }

    public void OpenGetHintsDialog(GameObject container)
    {
        GameObject dialog = gameObjectLoader.GetTutorial("GetHintsDialog");

        dialog.GetComponent<RectTransform>().parent = container.transform;
        dialog.GetComponent<RectTransform>().localScale = new Vector3(1f, 1f, 1f);
        dialog.GetComponent<RectTransform>().localPosition = new Vector3(0f, 0f, 0f);
    }

    public void OpenHintDescriptionDialog(GameObject container)
    {
        GameObject dialog = gameObjectLoader.GetTutorial("HintDescriptionDialog");

        dialog.GetComponent<RectTransform>().parent = container.transform;
        dialog.GetComponent<RectTransform>().localScale = new Vector3(1f, 1f, 1f);
        dialog.GetComponent<RectTransform>().localPosition = new Vector3(0f, 0f, 0f);
    }

    public void OpenBottomInfo(GameObject container, string textKey)
    {
        if (ExistsWindow(container, "BottomInfo"))
        {
            return;
        }

        GameObject go = gameObjectLoader.GetWindow("BottomInfo");

        go.GetComponent<RectTransform>().parent = container.transform;
        go.GetComponent<RectTransform>().localScale = new Vector3(1f, 1f, 1f);
        go.GetComponent<RectTransform>().offsetMin = new Vector2(0, 0);
        go.GetComponent<RectTransform>().offsetMax = new Vector2(0, 100);
        go.transform.Find("Text").GetComponent<LocalizeText>().key = textKey;
    }

    private void NextGame()
    {
        Game game = Player.GetInstance().ActualGame;
        if (game.Equals(game.Chapter.AllGames[game.Chapter.AllGames.Count - 1]))
        {
            LevelChooseInfos.showGames = false;
            LevelChooseInfos.chapterIndex = Player.GetInstance().AllChapter.IndexOf(game.Chapter) + 1;
            GameObject.Find("UI_Manager").GetComponent<UI_Controller>().switchScene("LevelSelect");
        }
        else
        {
            Player.GetInstance().ActualGame = game.Chapter.AllGames[game.Chapter.AllGames.IndexOf(game) + 1];
            GameObject.Find("Matchfield").GetComponent<GameSceneController>().StartGame();
        }
    }

    public void OpenWinWindow(GameObject container, bool firstTime)
    {
        if (ExistsWindow(container, "Win"))
        {
            return;
        }

        GameObject winDialog = gameObjectLoader.GetWindow("Win");

        winDialog.GetComponent<RectTransform>().parent = GameObject.Find("GameUI").GetComponent<RectTransform>();
        winDialog.GetComponent<RectTransform>().localScale = new Vector3(0.7f, 0.7f, 0.7f);
        winDialog.GetComponent<RectTransform>().localPosition = new Vector3(0, 0, 0);

        string winText = getWinText();

        winDialog.transform.Find("ResultText").GetComponent<LocalizeText>().key = winText;

        winDialog.transform.Find("DoubleButton").GetComponent<Button>().onClick.AddListener(() =>
        {
            GameObject.Find("AudioSourceClick").GetComponent<AudioSource>().Play();
            adController.ShowDoubleRewardAd();
            Destroy(winDialog.transform.Find("DoubleButton").gameObject);
        });

        winDialog.transform.Find("NewWorldButton").GetComponent<Button>().onClick.AddListener(() =>
        {
            GameObject.Find("AudioSourceClick").GetComponent<AudioSource>().Play();
            GameObject.Find("UI_Manager").GetComponent<UI_Controller>().switchScene("LevelSelect");
        });

        winDialog.transform.transform.Find("NextGameButton").GetComponent<Button>().onClick.AddListener(() =>
        {
            GameObject.Find("AudioSourceClick").GetComponent<AudioSource>().Play();
            winDialog.GetComponent<Animator>().SetTrigger("decrase");
            NextGame();
        });

        winDialog.transform.transform.Find("RetryButton").GetComponent<Button>().onClick.AddListener(() =>
        {
            GameObject.Find("AudioSourceClick").GetComponent<AudioSource>().Play();
            winDialog.GetComponent<Animator>().SetTrigger("decrase");
            container.GetComponent<GameSceneController>().StartGame();
        });

        winDialog.transform.Find("CompleteCoins").Find("CompleteCoinCount").gameObject.GetComponent<Text>().text = TBConstants.GAME_REWARD.ToString();
        winDialog.transform.Find("TotalCoins").Find("TotalCoinCount").gameObject.GetComponent<Text>().text = TBConstants.GAME_REWARD.ToString();
        winDialog.transform.Find("FirstTryReward").Find("Coins").Find("FirstTryRewardCoinCount").gameObject.GetComponent<Text>().text = TBConstants.GAME_FIRST_TRY_REWARD.ToString();

        if (!firstTime)
        {
            Destroy(winDialog.transform.Find("DoubleButton").gameObject);
            Destroy(winDialog.transform.Find("CompleteCoins").gameObject);
            Destroy(winDialog.transform.Find("Line").gameObject);
            Destroy(winDialog.transform.Find("TotalCoins").gameObject);
        }

        if (!firstTime || !IsNewWorldGame())
        {
            GameObject.Destroy(GameObject.Find("NewWorldButton"));
        }

        if (!firstTime || Player.GetInstance().ActualGame.Tries != 1)
        {
            GameObject.Destroy(GameObject.Find("FirstTryReward"));
        }
        else
        {
            winDialog.transform.Find("TotalCoins").Find("TotalCoinCount").GetComponent<Text>().text =
                (TBConstants.GAME_REWARD + TBConstants.GAME_FIRST_TRY_REWARD).ToString();
        }
    }

    private bool IsNewWorldGame()
    {
        Chapter newChapter = Player.GetInstance().GetChapterAfter(Player.GetInstance().ActualGame.Chapter);

        if (newChapter == null)
        {
            return false;
        }
        else
        {
            return newChapter.GamesPlayedToUnlockThisChapter - 1 == Player.GetInstance().ActualGame.Chapter.AllGames.IndexOf(Player.GetInstance().ActualGame);
        }
    }

    private string getWinText()
    {
        switch (Random.Range(0, 4))
        {
            case 0:
                return "great";
            case 1:
                return "nice";
            case 2:
                return "veryWell";
            case 3:
                return "super";
            default:
                return "great";
        }
    }

    public void OpenLoseWindow(GameObject container)
    {
        if (ExistsWindow(container, "Lose"))
        {
            return;
        }

        GameObject go = gameObjectLoader.GetWindow("Lose");

        string loseText = getLoseText();

        go.transform.Find("LoseText")
            .GetComponent<LocalizeText>().key = loseText;

        go.GetComponent<RectTransform>().parent = GameObject.Find("GameUI").GetComponent<RectTransform>();
        go.GetComponent<RectTransform>().localScale = new Vector3(0.7f, 0.7f, 0.7f);
        go.GetComponent<RectTransform>().localPosition = new Vector3(0, 0, 0);

        if (Player.GetInstance().ActualGame.IsPlayed)
        {
            go.transform.Find("SkipGame").GetComponent<Image>().sprite = Resources.Load<Sprite>("UI/Buttons/TB_UI_Button_Next");
        }

        if (Player.GetInstance().ActualGame.Tries % TBConstants.GAME_TRIES_FOR_FREE_HINT != 0)
        {
            // Destroy(go.transform.Find("FreeHint").gameObject);
        }

        go.transform.Find("SkipGame").GetComponent<Button>().onClick.AddListener(() =>
        {
            if (Player.GetInstance().ActualGame.IsPlayed)
            {
                GameObject.Find("AudioSourceClick").GetComponent<AudioSource>().Play();
                NextGame();
                go.GetComponent<Animator>().SetTrigger("decrase");
                return;
            }
            else
            {
                GameObject.Find("AudioSourceClickDisabledButton").GetComponent<AudioSource>().Play();
            }
        });

        go.transform.Find("Retry").GetComponent<Button>().onClick.AddListener(() =>
        {
            GameObject.Find("AudioSourceClick").GetComponent<AudioSource>().Play();
            GameObject.Find("Matchfield").GetComponent<GameSceneController>().StartGame();
            go.GetComponent<Animator>().SetTrigger("decrase");
        });

        go.transform.Find("FreeHint").GetComponent<Button>().onClick.AddListener(() =>
            {
                GameObject.Find("AudioSourceClick").GetComponent<AudioSource>().Play();
                adController.ShowFreeHintAd();
            });
    }

    private string getLoseText()
    {
        switch (Random.Range(0, 4))
        {
            case 0:
                return "nearly";
            case 1:
                return "tryAgain";
            case 2:
                return "nextTime";
            case 3:
                return "aPity";
            default:
                return "nearly";
        }
    }
}
