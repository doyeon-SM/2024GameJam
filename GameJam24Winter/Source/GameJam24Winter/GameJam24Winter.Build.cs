// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GameJam24Winter : ModuleRules
{
	public GameJam24Winter(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
