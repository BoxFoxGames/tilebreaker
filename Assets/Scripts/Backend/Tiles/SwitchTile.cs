using System;

public class SwitchTile : Tile
{
    public OccupiedTile freeTile;
    public int occupiedTileNumber; 

    public SwitchTile(OccupiedTile freeTile, Game game, int occupiedTileNumber) : base(game)
    {
        this.freeTile = freeTile;
        this.occupiedTileNumber = occupiedTileNumber;
    }

    public override void OnAction()
    {
        freeTile.FreeTile();
    }

    public override string ToString()
    {
        return "SwitchTile";
    }

    // Getter and Setter
    public OccupiedTile FreeTile { get { return freeTile; } }
}
