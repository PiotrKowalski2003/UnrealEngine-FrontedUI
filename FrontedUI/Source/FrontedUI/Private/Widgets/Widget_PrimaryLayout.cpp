// Piotr Kowalski All Rights Reserved

#include "Widgets/Widget_PrimaryLayout.h"
#include "FrontendDebugHelper.h"

/** * Locates a UI container using a Gameplay Tag.
 * checkf acts as a 'hard' developer-only guard to ensure the UI is set up correctly in the Editor.
 */
UCommonActivatableWidgetContainerBase* UWidget_PrimaryLayout::FindWidgetStackByTag(const FGameplayTag& InTag) const
{
	// Halt execution if the requested stack isn't in the map (usually means a tag was missed in the UMG setup)
	checkf(RegisteredWidgetStackMap.Contains(InTag), TEXT("Can not find the widget stack by the tag %s"), *InTag.ToString());
    
	return RegisteredWidgetStackMap.FindRef(InTag);
}

/** * Stores a reference to a UI container (like a Stack) associated with a specific Tag.
 * This happens at runtime, allowing for a decoupled, tag-based UI management system.
 */
void UWidget_PrimaryLayout::RegisterWidgetStack(UPARAM(meta= (Categories = "Frontend.WidgetStack")) FGameplayTag InStackTag, UCommonActivatableWidgetContainerBase* InStack)
{
	// Skip registration in the UMG Designer to prevent cluttering logs or causing editor-only issues
	if (!IsDesignTime())
	{
		// Check for duplicates to avoid unnecessary map operations
		if (!RegisteredWidgetStackMap.Contains(InStackTag))
		{
			RegisteredWidgetStackMap.Add(InStackTag, InStack);
          
			// Debug output to the screen and log to confirm the UI layer is ready for use
			Debug::Print(TEXT("Widget Stack Registered under the tag ") + InStackTag.ToString());
		}
	}
}