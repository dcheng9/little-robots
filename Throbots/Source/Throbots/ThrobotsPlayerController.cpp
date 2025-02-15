// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ThrobotsPlayerController.h"
#include "AI/Navigation/NavigationSystem.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "ThrobotsCharacter.h"
#include "Engine/World.h"
#include "GameFramework/Pawn.h"


AThrobotsPlayerController::AThrobotsPlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}

void AThrobotsPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	// keep updating the destination every tick while desired
	/*if (bMoveToMouseCursor)
	{
		MoveToMouseCursor();
	}*/
}

void AThrobotsPlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	// MOVEMENT
	InputComponent->BindAxis("MoveForward", this, &AThrobotsPlayerController::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &AThrobotsPlayerController::Turn);

	//InputComponent->BindAction("SetDestination", IE_Pressed, this, &AThrobotsPlayerController::OnSetDestinationPressed);
	//InputComponent->BindAction("SetDestination", IE_Released, this, &AThrobotsPlayerController::OnSetDestinationReleased);

	//// support touch devices 
	//InputComponent->BindTouch(EInputEvent::IE_Pressed, this, &AThrobotsPlayerController::MoveToTouchLocation);
	//InputComponent->BindTouch(EInputEvent::IE_Repeat, this, &AThrobotsPlayerController::MoveToTouchLocation);

	//InputComponent->BindAction("ResetVR", IE_Pressed, this, &AThrobotsPlayerController::OnResetVR);
}

//void AThrobotsPlayerController::OnResetVR()
//{
//	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
//}
//
//void AThrobotsPlayerController::MoveToMouseCursor()
//{
//	if (UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled())
//	{
//		if (AThrobotsCharacter* MyPawn = Cast<AThrobotsCharacter>(GetPawn()))
//		{
//			if (MyPawn->GetCursorToWorld())
//			{
//				UNavigationSystem::SimpleMoveToLocation(this, MyPawn->GetCursorToWorld()->GetComponentLocation());
//			}
//		}
//	}
//	else
//	{
//		// Trace to see what is under the mouse cursor
//		FHitResult Hit;
//		GetHitResultUnderCursor(ECC_Visibility, false, Hit);
//
//		if (Hit.bBlockingHit)
//		{
//			// We hit something, move there
//			SetNewMoveDestination(Hit.ImpactPoint);
//		}
//	}
//}

//void AThrobotsPlayerController::MoveToTouchLocation(const ETouchIndex::Type FingerIndex, const FVector Location)
//{
//	FVector2D ScreenSpaceLocation(Location);
//
//	// Trace to see what is under the touch location
//	FHitResult HitResult;
//	GetHitResultAtScreenPosition(ScreenSpaceLocation, CurrentClickTraceChannel, true, HitResult);
//	if (HitResult.bBlockingHit)
//	{
//		// We hit something, move there
//		SetNewMoveDestination(HitResult.ImpactPoint);
//	}
//}
//
//void AThrobotsPlayerController::SetNewMoveDestination(const FVector DestLocation)
//{
//	APawn* const MyPawn = GetPawn();
//	if (MyPawn)
//	{
//		UNavigationSystem* const NavSys = GetWorld()->GetNavigationSystem();
//		float const Distance = FVector::Dist(DestLocation, MyPawn->GetActorLocation());
//
//		// We need to issue move command only if far enough in order for walk animation to play correctly
//		if (NavSys && (Distance > 120.0f))
//		{
//			NavSys->SimpleMoveToLocation(this, DestLocation);
//		}
//	}
//}
//
//void AThrobotsPlayerController::OnSetDestinationPressed()
//{
//	// set flag to keep updating destination until released
//	bMoveToMouseCursor = true;
//}
//
//void AThrobotsPlayerController::OnSetDestinationReleased()
//{
//	// clear flag to indicate we should stop updating the destination
//	bMoveToMouseCursor = false;
//}

void AThrobotsPlayerController::MoveForward(float amount)
{
	APawn* const MyPawn = GetPawn();
	if (MyPawn->Controller && amount)
	{
		MyPawn->AddMovementInput(MyPawn->GetActorForwardVector(), amount);
	}
}

void AThrobotsPlayerController::Turn(float amount)
{
	APawn* const MyPawn = GetPawn();

	

	if (MyPawn->Controller && amount)
	{
		FRotator ActorRotation = MyPawn->GetActorRotation();

		ActorRotation.Yaw += amount;

		MyPawn->SetActorRotation(ActorRotation);
	}
}