// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCazaBombardera.h"

ANaveEnemigaCazaBombardera::ANaveEnemigaCazaBombardera()
{
	PrimaryActorTick.bCanEverTick = true;
	//velocidad = 10.0f;
	//bCanMove = true;
	//bCanFire = true;
	//fireRate = 1.0f;
}

void ANaveEnemigaCazaBombardera::BeginPlay()
{
	Super::BeginPlay();

}

void ANaveEnemigaCazaBombardera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
//	Mover();
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("ANaveEnemigaCaza BeginPlay"));
}

void ANaveEnemigaCazaBombardera::Disparar()
{
}

//void ANaveEnemigaCazaBombardera::Mover()
//{
//	SetActorLocation(FVector(GetActorLocation().X - velocidad,GetActorLocation().Y,GetActorLocation().Z));
//}

