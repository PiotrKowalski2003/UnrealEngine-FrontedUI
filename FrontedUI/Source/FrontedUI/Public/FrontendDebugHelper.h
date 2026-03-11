// Piotr Kowalski All Rights Reserved

#pragma once

/** * Utility namespace for quick debugging. 
 * Combines On-Screen messages and Output Log entries into one call.
 */
namespace Debug
{
	/** * Prints a message to the screen and the log.
	 * @param Msg     The string to display.
	 * @param InKey   -1 to add a new message, or a specific ID to overwrite an existing one.
	 * @param InColor The color of the on-screen text (defaults to a random color for visibility).
	 */
	static void Print(const FString& Msg, int32 InKey = -1, const FColor& InColor = FColor::MakeRandomColor())
	{
		// Ensure the engine is initialized before attempting to print
		if (GEngine)
		{
			// Display the message on the game viewport for 7 seconds
			GEngine->AddOnScreenDebugMessage(InKey, 7.f, InColor, Msg);
          
			// Simultaneously write the message to the Output Log (Window -> Output Log)
			UE_LOG(LogTemp, Warning, TEXT("%s"), *Msg);
		}
	}
}