// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"
#include "PrototypeProjectile.h"
#include "ProjectileEnemigo.h"

// Sets default values
ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	PrimaryActorTick.bCanEverTick = true;

	mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemiga->SetupAttachment(RootComponent);
	RootComponent = mallaNaveEnemiga;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	bCanFire = true;
}

// Called when the game starts or when spawned
void ANaveEnemigaCaza::BeginPlay()
{
	Super::BeginPlay();

}
// Called every frame

void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover();
	Disparar();
}

AActor* ANaveEnemigaCaza::ClonarNaveEnemiga()
{
	ANaveEnemigaCaza* naveEnemiga = GetWorld()->SpawnActor<ANaveEnemigaCaza>(GetClass());

	naveEnemiga->velocidad = this->velocidad;
	naveEnemiga->fireRate = this->fireRate;
	naveEnemiga->bCanMove = this->bCanMove;
	naveEnemiga->bCanFire = this->bCanFire;

	return naveEnemiga;
}

void ANaveEnemigaCaza::Disparar()
{
	FVector SpawnLocation = GetActorLocation() + -(GetActorForwardVector() * 1);
	if (bCanFire == true)
	{
		GetWorld()->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ANaveEnemigaCaza::ShotTimerExpired, fireRate, false);
		AProjectileEnemigo* NewProjectile = GetWorld()->SpawnActor<AProjectileEnemigo>(SpawnLocation, FRotator::ZeroRotator);
		bCanFire = false;
	}
}

void ANaveEnemigaCaza::Mover()
{
	SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y, GetActorLocation().Z));
}

void ANaveEnemigaCaza::ShotTimerExpired()
{
	bCanFire = true;
}
