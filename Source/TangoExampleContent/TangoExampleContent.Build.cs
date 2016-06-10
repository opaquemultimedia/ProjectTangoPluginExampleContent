// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class TangoExampleContent : ModuleRules
{
	public TangoExampleContent(TargetInfo Target)
	{
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });

        //@TODO: Include the following and thoroughly test the 
        //PrivateDependencyModuleNames.AddRange(new string[] { "ProjectTangoPlugin" });
        //PrivateIncludePathModuleNames.AddRange(new string[] { "ProjectTangoPlugin" });

        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");
        // if ((Target.Platform == UnrealTargetPlatform.Win32) || (Target.Platform == UnrealTargetPlatform.Win64))
        // {
        //		if (UEBuildConfiguration.bCompileSteamOSS == true)
        //		{
        //			DynamicallyLoadedModuleNames.Add("OnlineSubsystemSteam");
        //		}
        // }
    }
}
