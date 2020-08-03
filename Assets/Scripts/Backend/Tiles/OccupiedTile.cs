using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

public class OccupiedTile : Tile
{
    public int occupiedTileNumber;
    public OccupiedTile(Game game, int occupiedTileNumber) : base(game)
    {
        this.occupiedTileNumber = occupiedTileNumber;
        BlockTile();
    }

    public override string ToString()
    {
        return "OccupiedTile";
    }
}
