// Copyright Epic Games, Inc. All Rights Reserved.

#include "PrototypeGameMode.h"
#include "PrototypePawn.h"
#include "NaveEnemigaCazaBombardera.h"
#include "NaveEnemigaCaza.h"

APrototypeGameMode::APrototypeGameMode()
{
	PrimaryActorTick.bCanEverTick = true;
	// set default pawn class to our character class
	DefaultPawnClass = APrototypePawn::StaticClass();
}

void APrototypeGameMode::BeginPlay()
{
	Super::BeginPlay();


	// Se Define El Prototipo 1
	FVector PosicionNaveActual = FVector(600.0f, 250.0f, 200.0f);
	navePrototipo1 = GetWorld()->SpawnActor<ANaveEnemigaCaza>(ANaveEnemigaCaza::StaticClass(), PosicionNaveActual, FRotator::ZeroRotator);
	navePrototipo1->SetVelocidad(5.0f);
	navePrototipo1->SetFireRate(0.5f);

	//Se Define el Prototipo 2
	PosicionNaveActual = FVector(600.0f, 300.0f, 200.0f);
	navePrototipo2 = GetWorld()->SpawnActor<ANaveEnemigaCaza>(ANaveEnemigaCaza::StaticClass(), PosicionNaveActual, FRotator::ZeroRotator);
	navePrototipo2->SetVelocidad(1.0f);
	navePrototipo2->SetFireRate(2.0f);



	//Se clonan los prototipos

	UWorld* World = GetWorld();
	if (World != nullptr)
	{
		PosicionNaveActual = FVector(600.0f, 250.0f, 200.0f);
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 2; j++) {

				ANaveEnemigaCaza* nuevaCaza = Cast<ANaveEnemigaCaza>(navePrototipo1->ClonarNaveEnemiga());
				nuevaCaza->SetActorLocation(FVector(270.0f + j*200, -660.0f + i * 600, 200.0f));
			}
		}

		PosicionNaveActual = FVector(600.0f, 300.0f, 200.0f);
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {

				ANaveEnemigaCaza* nuevaCaza2 = Cast<ANaveEnemigaCaza>(navePrototipo2->ClonarNaveEnemiga());
				nuevaCaza2->SetActorLocation(FVector(270.0f + j * 150, -660.0f + i * 300, 200.0f));
			}
		}
	}
}

void APrototypeGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

