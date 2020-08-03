using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Purchasing;

public class IAPManager : MonoBehaviour, IStoreListener
{
    public static IAPManager Instance { set; get; }

    private static IStoreController m_StoreController;
    private static IExtensionProvider m_StoreExtensionProvider; 

    public static string TB_100Coins = "100_coins";
    public static string TB_200Coins = "200_coins";
    public static string TB_500Coins = "500_coins";
    public static string TB_1000Coins = "1000_coins";
    public static string TB_REMOVE_ADS = "remove_ads";

    private void Awake()
    {
        Instance = this;
    }

    void Start()
    {
        if (m_StoreController == null)
        {
            InitializePurchasing();
        }
    }

    public String GetPriceFor(string iapId)
    {
        if(m_StoreController == null || m_StoreController.products == null) {
            return null;
        }
        return m_StoreController.products.WithID(iapId).metadata.localizedPriceString;
    }

    public void InitializePurchasing()
    {
        if (IsInitialized())
        {
            return;
        }

        var builder = ConfigurationBuilder.Instance(StandardPurchasingModule.Instance());
        builder.AddProduct(TB_100Coins, ProductType.Consumable);
        builder.AddProduct(TB_200Coins, ProductType.Consumable);
        builder.AddProduct(TB_500Coins, ProductType.Consumable);
        builder.AddProduct(TB_1000Coins, ProductType.Consumable);
        builder.AddProduct(TB_REMOVE_ADS, ProductType.NonConsumable);
        UnityPurchasing.Initialize(this, builder);
    }


    private bool IsInitialized()
    {
        return m_StoreController != null && m_StoreExtensionProvider != null;
    }


    public void Buy100Coins()
    {
        BuyProductID(TB_100Coins);
    }

    public void Buy200Coins()
    {
        BuyProductID(TB_200Coins);
    }

    public void Buy500Coins()
    {
        BuyProductID(TB_500Coins);
    }

    public void Buy1000Coins()
    {
        BuyProductID(TB_1000Coins);
    }

    public void BuyRemoveAds()
    {
        BuyProductID(TB_REMOVE_ADS);
    }

    void BuyProductID(string productId)
    {
        if (IsInitialized())
        {
            Product product = m_StoreController.products.WithID(productId);

            if (product != null && product.availableToPurchase)
            {
                m_StoreController.InitiatePurchase(product);
            }
        }
        else
        {
            Debug.Log("BuyProductID FAIL. Not initialized.");
        }
    }


    public void OnInitialized(IStoreController controller, IExtensionProvider extensions)
    {
        m_StoreController = controller;
        m_StoreExtensionProvider = extensions;
    }


    public void OnInitializeFailed(InitializationFailureReason error)
    {
        Debug.Log("OnInitializeFailed InitializationFailureReason:" + error);
    }


    public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs args)
    {
        if (String.Equals(args.purchasedProduct.definition.id, TB_100Coins, StringComparison.Ordinal))
        {
            Player.GetInstance().Coins += 100;
        }
        else if (String.Equals(args.purchasedProduct.definition.id, TB_200Coins, StringComparison.Ordinal))
        {
            Player.GetInstance().Coins += 200;
        }
        else if (String.Equals(args.purchasedProduct.definition.id, TB_500Coins, StringComparison.Ordinal))
        {
            Player.GetInstance().Coins += 500;
        }
        else if (String.Equals(args.purchasedProduct.definition.id, TB_1000Coins, StringComparison.Ordinal))
        {
            Player.GetInstance().Coins += 1000;
        }
        else if (String.Equals(args.purchasedProduct.definition.id, TB_REMOVE_ADS, StringComparison.Ordinal))
        {
            Player.GetInstance().ShouldShowAds = false;
            GameObject removeAdsContainer = GameObject.Find("RemoveAds");
            if (removeAdsContainer != null)
            {
                Destroy(removeAdsContainer);
            }
        }
        else
        {
            Debug.Log("ProcessPurchase: FAIL. Unrecognized product:");
        }

        SaveLoadGame.SaveGame();
        return PurchaseProcessingResult.Complete;
    }


    public void OnPurchaseFailed(Product product, PurchaseFailureReason failureReason)
    {
        Debug.Log(string.Format("OnPurchaseFailed: FAIL. Product: '{0}', PurchaseFailureReason: {1}", product.definition.storeSpecificId, failureReason));
    }
}

