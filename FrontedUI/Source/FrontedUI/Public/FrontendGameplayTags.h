// Piotr Kowalski All Rights Reserved

#pragma once

#include "NativeGameplayTags.h"

/**
 * Global namespace for UI-related Gameplay Tags.
 * Declared as EXTERN so they can be accessed by other modules/classes.
 */
namespace FrontedGameplayTags
{
	/** External declaration for the Modal/Popup UI layer tag. */
	FRONTEDUI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Frontend_WidgetStack_Modal);

	/** External declaration for the Pause/In-game Menu UI layer tag. */
	FRONTEDUI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Frontend_WidgetStack_GameMenu);

	/** External declaration for the persistent HUD/Overlay UI layer tag. */
	FRONTEDUI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Frontend_WidgetStack_GameHud);

	/** External declaration for the Main Menu/Frontend UI layer tag. */
	FRONTEDUI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Frontend_WidgetStack_Fronted);
}