using Hacknet;
using Microsoft.Xna.Framework;
using Pathfinder.Port;
using Pathfinder.Util;

public class NetSpoofExe : Pathfinder.Executable.BaseExecutable
{
    private int netPort;
    private float lifetime=0f;

    public NetSpoofExe(Rectangle location, OS operationSystem, string[] args)
        : base(location, operationSystem, args)
    {
        name = "NetSpoof";
        IdentifierName = "Network Spoofer";
        ramCost = 350;
    }

    public override void LoadContent()
    {
        Computer c = ComputerLookup.FindByIp(targetIP);
        netPort = c.GetDisplayPortNumberFromCodePort(211);

        if (Args.Length < 2
            || !Int32.TryParse(Args[1], out int port)
            || port != netPort)
        {
            os.write("Target Port is Closed or missing");
            os.write("Execution failed");
            needsRemoval = true;
            return;
        }

        base.LoadContent();
    }

    public override void Update(float t)
    {
        base.Update(t);
    }

    public override void Draw(float t)
    {

        base.Draw(t);
    }

    public override void Completed()
    {
        base.Completed();
        Programs.getComputer(os, targetIP).openPort("transfer", os.thisComputer.ip);
        os.write("Transfer protocol is broken.");
        isExiting = true;
    }

}