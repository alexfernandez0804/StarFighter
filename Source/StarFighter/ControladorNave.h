// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ControladorNave.generated.h"

//class ABall

UCLASS()
class STARFIGHTER_API AControladorNave : public APlayerController
{
	GENERATED_BODY()

		AControladorNave();

	UFUNCTION()
		virtual void SetupInputComponent() override;

protected:

	virtual void BeginPlay() override;
	void MoveHorizontal(float AxisValue);

	// ball references



};
