// Piotr Kowalski All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "GameplayTagContainer.h"
#include "Widget_PrimaryLayout.generated.h"

// Forward declaration of the CommonUI container class to improve compile times
class UCommonActivatableWidgetContainerBase;

/**
 * The base class for the main UI layout.
 * Manages multiple "stacks" (e.g., HUD, Menu, Modal) indexed by Gameplay Tags.
 */
UCLASS(Abstract, BlueprintType, meta = (DisableNaiveTick))
class FRONTEDUI_API UWidget_PrimaryLayout : public UCommonUserWidget
{
	GENERATED_BODY()
    
public:
	/** * Returns the widget container associated with a specific tag (e.g., "UI.Layer.Modal"). */
	UCommonActivatableWidgetContainerBase* FindWidgetStackByTag(const FGameplayTag& InTag) const;

protected:
	/** * Registers a widget container into the map. Exposed to Blueprints for setup in the UMG designer. */
	UFUNCTION(BlueprintCallable)
	void RegisterWidgetStack(UPARAM(meta= (Categories = "Frontend.WidgetStack")) FGameplayTag InStackTag, UCommonActivatableWidgetContainerBase* InStack);
    
private:
	/** * Runtime map of tags to widget containers. 
	 * Marked 'Transient' so it isn't saved to disk and starts fresh each session.
	 */
	UPROPERTY(Transient)
	TMap<FGameplayTag, UCommonActivatableWidgetContainerBase*> RegisteredWidgetStackMap;
    
};