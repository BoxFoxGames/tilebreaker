using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using UnityEngine.Advertisements;
using UnityEngine.UI;

public class AdController
{
    private RewardedAdType rewardedAdType;

    public void ShowVideoAd()
    {
        Debug.Log("hallo");
        Debug.Log("Ads? " +  Player.GetInstance().ShouldShowAds);
        Debug.Log("COUNT " + Player.GetInstance().WinsWithoutAd);

        if (!Advertisement.IsReady() || Player.GetInstance().WinsWithoutAd < TBConstants.GAMES_WITHOUT_AD || !Player.GetInstance().ShouldShowAds)
        {
            return;
        }

        Advertisement.Show("video");
        Player.GetInstance().WinsWithoutAd = 0;
    }

    public void ShowDoubleRewardAd()
    {
        rewardedAdType = RewardedAdType.DOUBLE_REWARD;
        ShowRewardedAd();
    }

    public void ShowFreeHintAd()
    {
        rewardedAdType = RewardedAdType.FREE_HINT;
        ShowRewardedAd();
    }

    private void ShowRewardedAd()
    {
        if (!Advertisement.IsReady())
        {
            return;
        }

        Advertisement.Show("rewardedVideo", new ShowOptions() { resultCallback = HandleAdResult });
    }

    private void HandleAdResult(ShowResult showResult)
    {
        switch (showResult)
        {
            case ShowResult.Finished:
                switch (rewardedAdType)
                {
                    case RewardedAdType.DOUBLE_REWARD:
                        GetDoubleReward();
                        break;
                    case RewardedAdType.FREE_HINT:
                        GetFreeHint();
                        break;
                }
                break;
            case ShowResult.Failed:
                break;
            case ShowResult.Skipped:
                break;
        }
    }

    private void GetDoubleReward()
    {
        Player.GetInstance().ActualGame.DoubleReward();
        int totalReward = (TBConstants.GAME_REWARD * 2);
        GameObject.Find("CompleteCoinCount")
            .GetComponent<Text>().text = (TBConstants.GAME_REWARD * 2).ToString();
        if (Player.GetInstance().ActualGame.Tries == 1)
        {
            GameObject.Find("FirstTryRewardCoinCount")
                .GetComponent<Text>().text = (TBConstants.GAME_FIRST_TRY_REWARD * 2).ToString();
            totalReward += (TBConstants.GAME_FIRST_TRY_REWARD * 2);
        }
        GameObject.Find("TotalCoinCount")
            .GetComponent<Text>().text = totalReward.ToString();
    }

    private void GetFreeHint()
    {
        Player.GetInstance().ActualGame.Hints++;
        SaveLoadGame.SaveGame();
        GameObject.Destroy(GameObject.Find("FreeHint"));
    }
}

public enum RewardedAdType
{
    DOUBLE_REWARD,
    FREE_HINT
}
