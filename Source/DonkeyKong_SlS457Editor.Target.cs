// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class DonkeyKong_SlS457EditorTarget : TargetRules
{
	public DonkeyKong_SlS457EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("DonkeyKong_SlS457");
	}
}
