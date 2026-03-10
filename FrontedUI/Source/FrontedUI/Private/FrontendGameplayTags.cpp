// Piotr Kowalski All Rights Reserved

#include "FrontendGameplayTags.h"

namespace FrontendGameplayTags
{
	/** Defines the tag for high-priority modal popups (e.g., confirmation dialogs). */
	UE_DEFINE_GAMEPLAY_TAG(Frontend_WidgetStack_Modal, "Frontend.WidgetStack.Modal");

	/** Defines the tag for the main escape/pause menu stack. */
	UE_DEFINE_GAMEPLAY_TAG(Frontend_WidgetStack_GameMenu, "Frontend.WidgetStack.GameMenu");

	/** Defines the tag for the standard in-game heads-up display. */
	UE_DEFINE_GAMEPLAY_TAG(Frontend_WidgetStack_GameHud, "Frontend.WidgetStack.GameHud");

	/** Defines the tag for the main menu/frontend UI navigation. */
	UE_DEFINE_GAMEPLAY_TAG(Frontend_WidgetStack_Frontend, "Frontend.WidgetStack.Frontend");
}