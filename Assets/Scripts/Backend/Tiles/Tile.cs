using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tile
{
    public bool isAvailable = true;
    private Game game;

    public Tile(Game game)
    {
        this.game = game;
    }

    protected void BlockTile()
    {
        isAvailable = false;
    }

    public void FreeTile()
    {
        isAvailable = true;
    }

    public virtual void OnAction() { }
 
    public virtual void OfAction()
    {
        game.DeleteTile(this);
    }

    //Getter und Setter 
    public bool IsAvailable { get { return isAvailable; } }
    protected Game Game { get { return game; } }
}
