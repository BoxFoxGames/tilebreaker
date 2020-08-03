using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenuSceneController : MonoBehaviour
{
    public GameObject removeAdsButton;
    
    void Start()
    {
        if (!Player.GetInstance().ShouldShowAds) {
            Debug.Log("Hallo");
          GameObject.Destroy(removeAdsButton);
        }

        if(Player.GetInstance().IsFirstTime) {
            Player.GetInstance().ActualGame = Player.GetInstance().AllChapter[0].AllGames[0];
            Player.GetInstance().IsFirstTime = false;
            SceneManager.LoadScene("World_Tutorial");
        }
    }
}
