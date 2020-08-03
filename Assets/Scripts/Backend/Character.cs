using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class Character
{
    public Player player;
    public String name;
    public int price;
    public bool isChoosen = false;
    public bool isAvailable = false;

    public Character(string name, int price, Player player)
    {
        this.player = player;
        this.name = name;
        this.price = price;
    }

    public bool Buy()
    {
        if (Player.Coins < price)
        {
            return false;
        }

        Player.Coins -= price;
        isAvailable = true;
        return true;
    }

    public void ChooseCharacter()
    {
        isChoosen = true;
    }

    public void UnchooseCharacter()
    {
        isChoosen = false;
    }

    //Getter and Setter
    public Player Player { get { return player; } }
    public bool IsChoosen { get { return isChoosen; } }
    public int Price { get { return price; } }
    public String Name { get { return name; } }
    public bool IsAvailable { get { return isAvailable; } }
}
