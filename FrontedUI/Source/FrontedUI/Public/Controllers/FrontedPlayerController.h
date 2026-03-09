// Piotr Kowalski All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "FrontedPlayerController.generated.h"

/**
 * Custom PlayerController class to handle initialization logic,
 * such as setting the initial camera view on possession.
 */
UCLASS()
class FRONTEDUI_API AFrontedPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	//~ Begin APlayerController Interface 
    
	/** * Called when the controller successfully possesses a pawn. 
	 * Used here to override the default view target.
	 */
	virtual void OnPossess(APawn* aPawn) override;
    
	//~ End APlayerController Interface 
};