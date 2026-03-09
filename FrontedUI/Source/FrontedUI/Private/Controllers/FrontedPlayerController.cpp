// Piotr Kowalski All Rights Reserved

#include "Controllers/FrontedPlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"

void AFrontedPlayerController::OnPossess(APawn* aPawn)
{
	// Execute base engine logic for possessing a pawn
	Super::OnPossess(aPawn);
    
	// Search the world for all Camera Actors with the "Default" tag
	TArray<AActor*> FoundCameras;
	UGameplayStatics::GetAllActorsOfClassWithTag(this, ACameraActor::StaticClass(), FName("Default"), FoundCameras);

	// If a matching camera is found, transition the player's view to it
	if (!FoundCameras.IsEmpty())
	{
		SetViewTarget(FoundCameras[0]);
	}
}