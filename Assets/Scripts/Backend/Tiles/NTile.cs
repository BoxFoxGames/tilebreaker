using System;

public class NTile : Tile
{
    public int numberOfUses;

    public NTile(int numberOfUses, Game game) : base(game)
    {
        this.numberOfUses = numberOfUses;
    }

    public override void OfAction()
    {
        this.numberOfUses -= 1;
        if (this.numberOfUses < 1)
        {
            Game.DeleteTile(this);
        }
    }

    public override string ToString()
    {
        return String.Format("{0}Tile", numberOfUses);
    }
}
