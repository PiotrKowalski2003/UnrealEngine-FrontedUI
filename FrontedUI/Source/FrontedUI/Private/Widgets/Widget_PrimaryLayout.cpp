// Piotr Kowalski All Rights Reserved

#include "Widgets/Widget_PrimaryLayout.h"

/** * Retrieves a specific widget container (stack) associated with a given Gameplay Tag.
 * Uses 'checkf' to halt execution if the tag isn't found, preventing null pointer crashes later.
 */
UCommonActivatableWidgetContainerBase* UWidget_PrimaryLayout::FindWidgetStackByTag(const FGameplayTag& InTag) const
{
	// Ensure the tag exists in our map; if not, crash with a helpful error message (Debug/Development only)
	checkf(RegisteredWidgetStackMap.Contains(InTag), TEXT("Can not find the widget stack by the tag %s"), *InTag.ToString());
    
	// Return the pointer to the container associated with this tag
	return RegisteredWidgetStackMap.FindRef(InTag);
}

/** * Maps a UI container (like a Stack or Overlay) to a specific Gameplay Tag.
 * This allows us to find the UI layer by its "Name" (Tag) rather than a direct reference.
 */
void UWidget_PrimaryLayout::RegisterWidgetStack(UPARAM(meta= (Categories = "Frontend.WidgetStack")) FGameplayTag InStackTag, UCommonActivatableWidgetContainerBase* InStack)
{
	// Only register during actual gameplay, not while editing in the UMG Designer
	if (!IsDesignTime())
	{
		// Add the stack to our map if it hasn't been registered yet
		if (!RegisteredWidgetStackMap.Contains(InStackTag))
		{
			RegisteredWidgetStackMap.Add(InStackTag, InStack);
		}
	}
}