// using System;

// using UnityEngine;

// using GooglePlayGames;
// using GooglePlayGames.BasicApi;
// using GooglePlayGames.BasicApi.SavedGame;

// using CodeStage.AntiCheat.ObscuredTypes;

// public class GooglePlayGameServiceScript : MonoBehaviour
// {

//     public static GooglePlayGameServiceScript Instance;
//     private static GooglePlayGameServiceScript instance
//     {
//         get
//         {
//             return Instance;
//         }
//     }
//     private PlayerStats PSobject;
//     private string PSstring;
//     private bool isSaving;

//     void Awake()
//     {
//         if (Instance)
//         {
//             DestroyImmediate(gameObject);
//         }
//         else
//         {
//             Screen.sleepTimeout = SleepTimeout.NeverSleep;
//             DontDestroyOnLoad(gameObject);
//             Instance = this;
//         }
//     }

//     void Start()
//     {
//         InitializeGPGS();
//     }

//     #region GPGS_CONFIGURATIONS

//     public void InitializeGPGS()
//     {
//         PlayGamesClientConfiguration config = new PlayGamesClientConfiguration.Builder()
//             // enables saving game progress.
//             .RequestEmail()
//             .EnableSavedGames()
//             .Build();
//         PlayGamesPlatform.InitializeInstance(config);

//         // recommended for debugging:
//         PlayGamesPlatform.DebugLogEnabled = true;

//         // Activate the Google Play Games platform
//         PlayGamesPlatform.Activate();

//         // SignIn();
//     }

//     public void SignIn()
//     {
//         Social.localUser.Authenticate((bool success) =>
//            {
//                if (success)
//                {
//                    OpenFileForRead();
//                }
//                else
//                {
//                    SaveLoadGame.LoadGame();
//                }
//            });
//     }

//     public void OpenFileForRead()
//     {
//         isSaving = false;
//         ((PlayGamesPlatform)Social.Active).SavedGame
//             .OpenWithAutomaticConflictResolution("TileBreaker_Data", DataSource.ReadCacheOrNetwork,
//             ConflictResolutionStrategy.UseLongestPlaytime, FileOpened);
//     }

//     public void OpenFileForWrite(PlayerStats ps)
//     {
//         if (Social.localUser.authenticated)
//         {
//             PSobject = ps;
//             isSaving = true;
//             ((PlayGamesPlatform)Social.Active).SavedGame
//                 .OpenWithAutomaticConflictResolution("TileBreaker_Data",
//                 DataSource.ReadCacheOrNetwork, ConflictResolutionStrategy.UseLongestPlaytime, FileOpened);
//         }
//     }

//     public void FileOpened(SavedGameRequestStatus status, ISavedGameMetadata game)
//     {
//         if (status != SavedGameRequestStatus.Success)
//         {
//             return;
//         }

//         if (isSaving)
//         {
//             PSstring = JsonUtility.ToJson(PSobject);
//             byte[] Data = System.Text.ASCIIEncoding.ASCII.GetBytes(PSstring);
//             SavedGameMetadataUpdate.Builder builder = new SavedGameMetadataUpdate.Builder().WithUpdatedPlayedTime(TimeSpan.FromMinutes(game.TotalTimePlayed.Minutes + 1)).WithUpdatedDescription("Saved Game at " + DateTime.Now);
//             SavedGameMetadataUpdate update = builder.Build();
//             ((PlayGamesPlatform)Social.Active).SavedGame.CommitUpdate(game, update, Data, DataWritten);
//         }
//         else
//         {
//             ((PlayGamesPlatform)Social.Active).SavedGame.ReadBinaryData(game, ReadData);
//         }
//     }

//     public void DataWritten(SavedGameRequestStatus status, ISavedGameMetadata game)
//     {
//         Debug.Log(status.ToString());
//     }

//     public void ReadData(SavedGameRequestStatus status, byte[] data)
//     {
//         if (status == SavedGameRequestStatus.Success)
//         {
//             PSstring = System.Text.ASCIIEncoding.ASCII.GetString(data);
//             PSobject = JsonUtility.FromJson<PlayerStats>(PSstring);
//             try
//             {
//                 PlayerStats localSavedPlayer = new PlayerStats();

//                 if (!ObscuredPrefs.GetString("PlayerStats").Equals(""))
//                 {
//                     localSavedPlayer = JsonUtility.FromJson<PlayerStats>(ObscuredPrefs.GetString("PlayerStats"));
//                 }

//                 if (System.DateTime.Compare(System.DateTime.Parse(localSavedPlayer.lastSave),
//                         System.DateTime.Parse(PSobject.lastSave)) < 0)
//                 {
//                     localSavedPlayer.coins = PSobject.coins;
//                 }

//                 // Games
//                 localSavedPlayer.playedGames = Math.Max(localSavedPlayer.playedGames, PSobject.playedGames);

//                 // Character
//                 foreach (string c in PSobject.availableCharacter)
//                 {
//                     if (!localSavedPlayer.availableCharacter.Contains(c))
//                     {
//                         localSavedPlayer.availableCharacter.Add(c);
//                     }
//                 }

//                 // Actual Character
//                 if (localSavedPlayer.actualCharacter.Equals(""))
//                 {
//                     localSavedPlayer.actualCharacter = PSobject.actualCharacter;
//                 }

//                 // ShowAds
//                 if (localSavedPlayer.showAds)
//                 {
//                     localSavedPlayer.showAds = PSobject.showAds;
//                 }

//                 // Language
//                 localSavedPlayer.language = PSobject.language;

//                 ObscuredPrefs.SetString("PlayerStats", JsonUtility.ToJson(localSavedPlayer));
//                 //   SaveLoadGame.LoadGame();
//             }
//             catch (Exception ex)
//             {
//                 OpenFileForWrite(new PlayerStats());
//             }
//         }
//     }

//     public bool IsConnected()
//     {
//         return Social.localUser.authenticated;
//     }

//     public void SignOut()
//     {
//         ((PlayGamesPlatform)Social.Active).SignOut();
//     }
//     #endregion GPGS_CONFIGURATIONS
// }
