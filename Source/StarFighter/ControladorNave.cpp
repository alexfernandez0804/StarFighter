// Fill out your copyright notice in the Description page of Project Settings.


#include "ControladorNave.h"

#include "Kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"

#include "NaveJugador.h"
//#include "Ball.h"

AControladorNave::AControladorNave()
{

}

void AControladorNave::BeginPlay()
{

	TArray<AActor*> CameraActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraActor::StaticClass(), CameraActors);

	FViewTargetTransitionParams Params;
	SetViewTarget(CameraActors[0], Params);
  

}

void AControladorNave::SetupInputComponent()
{

	Super::SetupInputComponent();

	EnableInput(this);

	InputComponent->BindAxis("MoveHorizontal", this, &AControladorNave::MoveHorizontal);
}

void AControladorNave::MoveHorizontal(float AxisValue)
{

	auto MyPawn = Cast<ANaveJugador>(GetPawn());

	if (MyPawn) {

		MyPawn->MoveHorizontal(AxisValue);

	}


}
