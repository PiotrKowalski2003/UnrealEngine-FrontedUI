// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFrontedUI_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FrontedUI;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FrontedUI()
	{
		if (!Z_Registration_Info_UPackage__Script_FrontedUI.OuterSingleton)
		{
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/FrontedUI",
			nullptr,
			0,
			PKG_CompiledIn | 0x00000000,
			0xF199A8DE,
			0xD3E528BB,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FrontedUI.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_FrontedUI.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FrontedUI(Z_Construct_UPackage__Script_FrontedUI, TEXT("/Script/FrontedUI"), Z_Registration_Info_UPackage__Script_FrontedUI, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF199A8DE, 0xD3E528BB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
