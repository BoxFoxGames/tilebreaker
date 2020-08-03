using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

public class JumpTile : Tile
{
    public int numberOfTileToJumpOver;

    public JumpTile(int numberOfTileToJumpOver, Game game) : base(game)
    {
        this.numberOfTileToJumpOver = numberOfTileToJumpOver;
    }

    public override void OnAction()
    {
        Game.GenerateNaighbors(numberOfTileToJumpOver);
    }

    public override string ToString()
    {
        return "JumpTile";
    }
}
