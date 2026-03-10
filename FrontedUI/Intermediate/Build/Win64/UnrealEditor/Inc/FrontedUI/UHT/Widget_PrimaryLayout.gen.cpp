// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Widget_PrimaryLayout.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWidget_PrimaryLayout() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidgetContainerBase_NoRegister();
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
FRONTEDUI_API UClass* Z_Construct_UClass_UWidget_PrimaryLayout();
FRONTEDUI_API UClass* Z_Construct_UClass_UWidget_PrimaryLayout_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_FrontedUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWidget_PrimaryLayout Function RegisterWidgetStack ***********************
struct Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics
{
	struct Widget_PrimaryLayout_eventRegisterWidgetStack_Parms
	{
		FGameplayTag InStackTag;
		UCommonActivatableWidgetContainerBase* InStack;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Widget_PrimaryLayout.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InStackTag_MetaData[] = {
		{ "Categories", "Frontend.WidgetStack" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InStack_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function RegisterWidgetStack constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InStackTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InStack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RegisterWidgetStack constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RegisterWidgetStack Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::NewProp_InStackTag = { "InStackTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_PrimaryLayout_eventRegisterWidgetStack_Parms, InStackTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InStackTag_MetaData), NewProp_InStackTag_MetaData) }; // 517357616
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::NewProp_InStack = { "InStack", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_PrimaryLayout_eventRegisterWidgetStack_Parms, InStack), Z_Construct_UClass_UCommonActivatableWidgetContainerBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InStack_MetaData), NewProp_InStack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::NewProp_InStackTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::NewProp_InStack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::PropPointers) < 2048);
// ********** End Function RegisterWidgetStack Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWidget_PrimaryLayout, nullptr, "RegisterWidgetStack", 	Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::Widget_PrimaryLayout_eventRegisterWidgetStack_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::Widget_PrimaryLayout_eventRegisterWidgetStack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget_PrimaryLayout::execRegisterWidgetStack)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_InStackTag);
	P_GET_OBJECT(UCommonActivatableWidgetContainerBase,Z_Param_InStack);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterWidgetStack(Z_Param_InStackTag,Z_Param_InStack);
	P_NATIVE_END;
}
// ********** End Class UWidget_PrimaryLayout Function RegisterWidgetStack *************************

// ********** Begin Class UWidget_PrimaryLayout ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWidget_PrimaryLayout;
UClass* UWidget_PrimaryLayout::GetPrivateStaticClass()
{
	using TClass = UWidget_PrimaryLayout;
	if (!Z_Registration_Info_UClass_UWidget_PrimaryLayout.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Widget_PrimaryLayout"),
			Z_Registration_Info_UClass_UWidget_PrimaryLayout.InnerSingleton,
			StaticRegisterNativesUWidget_PrimaryLayout,
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
	return Z_Registration_Info_UClass_UWidget_PrimaryLayout.InnerSingleton;
}
UClass* Z_Construct_UClass_UWidget_PrimaryLayout_NoRegister()
{
	return UWidget_PrimaryLayout::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWidget_PrimaryLayout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisableNaiveTick", "" },
		{ "IncludePath", "Widgets/Widget_PrimaryLayout.h" },
		{ "ModuleRelativePath", "Public/Widgets/Widget_PrimaryLayout.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredWidgetStackMap_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Widget_PrimaryLayout.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWidget_PrimaryLayout constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegisteredWidgetStackMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegisteredWidgetStackMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RegisteredWidgetStackMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UWidget_PrimaryLayout constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RegisterWidgetStack"), .Pointer = &UWidget_PrimaryLayout::execRegisterWidgetStack },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack, "RegisterWidgetStack" }, // 380321074
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidget_PrimaryLayout>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWidget_PrimaryLayout_Statics

// ********** Begin Class UWidget_PrimaryLayout Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_PrimaryLayout_Statics::NewProp_RegisteredWidgetStackMap_ValueProp = { "RegisteredWidgetStackMap", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UCommonActivatableWidgetContainerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidget_PrimaryLayout_Statics::NewProp_RegisteredWidgetStackMap_Key_KeyProp = { "RegisteredWidgetStackMap_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWidget_PrimaryLayout_Statics::NewProp_RegisteredWidgetStackMap = { "RegisteredWidgetStackMap", nullptr, (EPropertyFlags)0x0040008000002008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget_PrimaryLayout, RegisteredWidgetStackMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredWidgetStackMap_MetaData), NewProp_RegisteredWidgetStackMap_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidget_PrimaryLayout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_PrimaryLayout_Statics::NewProp_RegisteredWidgetStackMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_PrimaryLayout_Statics::NewProp_RegisteredWidgetStackMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_PrimaryLayout_Statics::NewProp_RegisteredWidgetStackMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_PrimaryLayout_Statics::PropPointers) < 2048);
// ********** End Class UWidget_PrimaryLayout Property Definitions *********************************
UObject* (*const Z_Construct_UClass_UWidget_PrimaryLayout_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontedUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_PrimaryLayout_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidget_PrimaryLayout_Statics::ClassParams = {
	&UWidget_PrimaryLayout::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWidget_PrimaryLayout_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_PrimaryLayout_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_PrimaryLayout_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidget_PrimaryLayout_Statics::Class_MetaDataParams)
};
void UWidget_PrimaryLayout::StaticRegisterNativesUWidget_PrimaryLayout()
{
	UClass* Class = UWidget_PrimaryLayout::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UWidget_PrimaryLayout_Statics::Funcs));
}
UClass* Z_Construct_UClass_UWidget_PrimaryLayout()
{
	if (!Z_Registration_Info_UClass_UWidget_PrimaryLayout.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidget_PrimaryLayout.OuterSingleton, Z_Construct_UClass_UWidget_PrimaryLayout_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidget_PrimaryLayout.OuterSingleton;
}
UWidget_PrimaryLayout::UWidget_PrimaryLayout(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWidget_PrimaryLayout);
UWidget_PrimaryLayout::~UWidget_PrimaryLayout() {}
// ********** End Class UWidget_PrimaryLayout ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_piotr_Documents_GitHub_Udemy_UnrealEngine_UnrealEngine_FrontedUI_FrontedUI_Source_FrontedUI_Public_Widgets_Widget_PrimaryLayout_h__Script_FrontedUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidget_PrimaryLayout, UWidget_PrimaryLayout::StaticClass, TEXT("UWidget_PrimaryLayout"), &Z_Registration_Info_UClass_UWidget_PrimaryLayout, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidget_PrimaryLayout), 3549803353U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_piotr_Documents_GitHub_Udemy_UnrealEngine_UnrealEngine_FrontedUI_FrontedUI_Source_FrontedUI_Public_Widgets_Widget_PrimaryLayout_h__Script_FrontedUI_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_piotr_Documents_GitHub_Udemy_UnrealEngine_UnrealEngine_FrontedUI_FrontedUI_Source_FrontedUI_Public_Widgets_Widget_PrimaryLayout_h__Script_FrontedUI_159738114{
	TEXT("/Script/FrontedUI"),
	Z_CompiledInDeferFile_FID_Users_piotr_Documents_GitHub_Udemy_UnrealEngine_UnrealEngine_FrontedUI_FrontedUI_Source_FrontedUI_Public_Widgets_Widget_PrimaryLayout_h__Script_FrontedUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_piotr_Documents_GitHub_Udemy_UnrealEngine_UnrealEngine_FrontedUI_FrontedUI_Source_FrontedUI_Public_Widgets_Widget_PrimaryLayout_h__Script_FrontedUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
