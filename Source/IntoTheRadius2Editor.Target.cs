using UnrealBuildTool;

public class IntoTheRadius2EditorTarget : TargetRules {
	public IntoTheRadius2EditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_5;
		CppStandard = CppStandardVersion.Cpp20;
		bOverrideBuildEnvironment = true;
		ExtraModuleNames.AddRange(new string[] {
			"IntoTheRadius2",
		});
	}
}
