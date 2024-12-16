// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GameJam24WinterPlayerController.generated.h"

class UInputMappingContext;

/**
 *
 */
UCLASS()
class GAMEJAM24WINTER_API AGameJam24WinterPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:

	/** Input Mapping Context to be used for player input */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputMappingContext* InputMappingContext;

	// Begin Actor interface
protected:

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	// End Actor interface
};
