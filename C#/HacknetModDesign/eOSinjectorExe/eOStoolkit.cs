
using BepInEx;
using BepInEx.Hacknet;
using Pathfinder.Executable;

namespace eOStoolkit;

[BepInPlugin(ModGUID, ModName, ModVer)]
public class eOStoolkit : HacknetPlugin
{
    public const string ModGUID = "com.BI3TKL.eOStoolkit";
    public const string ModName = "eOStoolkit";
    public const string ModVer = "0.1.0";

    public override bool Load()
    {
        LogDebug($"Loading {ModName} v{ModVer}...");
        LogDebug("Loading Executables...");
        ExecutableManager.RegisterExecutable<eOSinjectorExe>("#eOSPort_CRACK#");
        LogDebug($"Executable eOSinjector.exe registered successfully");
        Console.ForegroundColor = ConsoleColor.DarkMagenta;
        string message = @"

                                                                                                       
             ,----..                                                                                   
            /   /   \   .--.--.                                               ___                      
           /   .     : /  /    '.  ,--,                                     ,--.'|_                    
          .   /   ;.  |  :  /`. /,--.'|        ,---,  .--.                  |  | :,'   ,---.   __  ,-. 
         .   ;   /  ` ;  |  |--` |  |,     ,-+-. /  .--,`|                  :  : ' :  '   ,'\,' ,'/ /| 
   ,---. ;   |  ; \ ; |  :  ;_   `--'_    ,--.'|'   |  |.   ,---.    ,---..;__,'  /  /   /   '  | |' | 
  /     \|   :  | ; | '\  \    `.,' ,'|  |   |  ,""' '--`_  /     \  /     |  |   |  .   ; ,. |  |   ,' 
 /    /  .   |  ' ' ' : `----.   '  | |  |   | /  | ,--,'|/    /  |/    / :__,'| :  '   | |: '  :  /   
.    ' / '   ;  \; /  | __ \  \  |  | :  |   | |  | |  | .    ' / .    ' /  '  : |__'   | .; |  | '    
'   ;   /|\   \  ',  / /  /`--'  '  : |__|   | |  |/:  | '   ;   /'   ; :__ |  | '.'|   :    ;  : |    
'   |  / | ;   :    / '--'.     /|  | '.'|   | |--__|  : '   |  / '   | '.'|;  :    ;\   \  /|  , ;    
|   :    |  \   \ .'    `--'---' ;  :    |   |/ .'__/\_: |   :    |   :    :|  ,   /  `----'  ---'     
 \   \  /    `---`               |  ,   /'---'  |   :    :\   \  / \   \  /  ---`-'                    
  `----'                          ---`-'         \   \  /  `----'   `----'                             
                                                  `--`-'                                               

";
        Console.WriteLine(message);
        Console.WriteLine("Made by BI3TKL");
        Console.WriteLine($"[{ModName}] v{ModVer} loaded successfully!");
        Console.ResetColor();
        return true;
    }

    private void LogDebug(string message)
    {
        Log.LogDebug(message);
    }
}
