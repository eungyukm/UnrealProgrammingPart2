#include "Game/ABGameMode.h"
// #include "Player/ABPlayerController.h"

AABGameMode::AABGameMode() 
{
	ConstructorHelpers::FClassFinder<APawn> ThirdPersonClassRef(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C"));
	if(ThirdPersonClassRef.Class) 
	{
		DefaultPawnClass = ThirdPersonClassRef.Class;
	}

	// PlayerControllerClass는 StaticClass를 호출하면 가능 
	// PlayerControllerClass = AABPlayerController::StaticClass();

	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerClassRef(TEXT("/Script/ArenaBattle.ABPlayerController"));
	if(PlayerControllerClassRef.Class)
	{
		PlayerControllerClass = PlayerControllerClassRef.Class;
	}
}
