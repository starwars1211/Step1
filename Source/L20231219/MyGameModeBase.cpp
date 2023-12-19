// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "MyPawn.h"
#include "MyPlayerController.h"

AMyGameModeBase::AMyGameModeBase()
{
	/*
	if (GEngine)
	{
		//GEngine->AddOnScreenDebugMessage(0, 0.5f, FColor::Red, (TEXT("디버그시작")));
	}
	UE_LOG(LogTemp, Warning, TEXT("워닝"));
	*/

	DefaultPawnClass = AMyPawn::StaticClass();
	PlayerControllerClass = AMyPlayerController::StaticClass();

}



