// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include <Camera/CameraComponent.h>
#include <GameFramework/SpringArmComponent.h>
#include <GameFramework/CharacterMovementComponent.h>

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PlayerCam = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCam"));
	PlayerCamSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring"));

	PlayerCamSpringArm->SetupAttachment(RootComponent);
	PlayerCamSpringArm->SetUsingAbsoluteRotation(true);

	PlayerCam->SetupAttachment(PlayerCamSpringArm);
	PlayerCam->bUsePawnControlRotation = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 640.0f, 0.0f);

	
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

