// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Controllers/FrontedPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFrontedPlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
FRONTEDUI_API UClass* Z_Construct_UClass_AFrontedPlayerController();
FRONTEDUI_API UClass* Z_Construct_UClass_AFrontedPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_FrontedUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFrontedPlayerController *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AFrontedPlayerController;
UClass* AFrontedPlayerController::GetPrivateStaticClass()
{
	using TClass = AFrontedPlayerController;
	if (!Z_Registration_Info_UClass_AFrontedPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FrontedPlayerController"),
			Z_Registration_Info_UClass_AFrontedPlayerController.InnerSingleton,
			StaticRegisterNativesAFrontedPlayerController,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AFrontedPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AFrontedPlayerController_NoRegister()
{
	return AFrontedPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFrontedPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controllers/FrontedPlayerController.h" },
		{ "ModuleRelativePath", "Public/Controllers/FrontedPlayerController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AFrontedPlayerController constinit property declarations *****************
// ********** End Class AFrontedPlayerController constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFrontedPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AFrontedPlayerController_Statics
UObject* (*const Z_Construct_UClass_AFrontedPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontedUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFrontedPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFrontedPlayerController_Statics::ClassParams = {
	&AFrontedPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFrontedPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AFrontedPlayerController_Statics::Class_MetaDataParams)
};
void AFrontedPlayerController::StaticRegisterNativesAFrontedPlayerController()
{
}
UClass* Z_Construct_UClass_AFrontedPlayerController()
{
	if (!Z_Registration_Info_UClass_AFrontedPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFrontedPlayerController.OuterSingleton, Z_Construct_UClass_AFrontedPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFrontedPlayerController.OuterSingleton;
}
AFrontedPlayerController::AFrontedPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AFrontedPlayerController);
AFrontedPlayerController::~AFrontedPlayerController() {}
// ********** End Class AFrontedPlayerController ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_piotr_Documents_GitHub_Udemy_UnrealEngine_UnrealEngine_FrontedUI_FrontedUI_Source_FrontedUI_Public_Controllers_FrontedPlayerController_h__Script_FrontedUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFrontedPlayerController, AFrontedPlayerController::StaticClass, TEXT("AFrontedPlayerController"), &Z_Registration_Info_UClass_AFrontedPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFrontedPlayerController), 3946946016U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_piotr_Documents_GitHub_Udemy_UnrealEngine_UnrealEngine_FrontedUI_FrontedUI_Source_FrontedUI_Public_Controllers_FrontedPlayerController_h__Script_FrontedUI_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_piotr_Documents_GitHub_Udemy_UnrealEngine_UnrealEngine_FrontedUI_FrontedUI_Source_FrontedUI_Public_Controllers_FrontedPlayerController_h__Script_FrontedUI_3128145338{
	TEXT("/Script/FrontedUI"),
	Z_CompiledInDeferFile_FID_Users_piotr_Documents_GitHub_Udemy_UnrealEngine_UnrealEngine_FrontedUI_FrontedUI_Source_FrontedUI_Public_Controllers_FrontedPlayerController_h__Script_FrontedUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_piotr_Documents_GitHub_Udemy_UnrealEngine_UnrealEngine_FrontedUI_FrontedUI_Source_FrontedUI_Public_Controllers_FrontedPlayerController_h__Script_FrontedUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
