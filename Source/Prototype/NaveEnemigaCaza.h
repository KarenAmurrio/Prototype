// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PrototipoNaveEnemiga.h"
#include "NaveEnemigaCaza.generated.h"

UCLASS()
class PROTOTYPE_API ANaveEnemigaCaza : public AActor, public IPrototipoNaveEnemiga
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaNaveEnemiga;
	
public:	
	// Sets default values for this actor's properties
	ANaveEnemigaCaza();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	AActor* ClonarNaveEnemiga() override;

protected:
	float fireRate;
	float velocidad;
	bool bCanMove;
	bool bCanFire;
	FTimerHandle TimerHandle_ShotTimerExpired;

public:
	virtual void Disparar();
	virtual void Mover();
	void ShotTimerExpired();

public:
	FORCEINLINE void SetCanMove(bool bMove) { bCanMove = bMove; }
	FORCEINLINE void SetCanFire(bool bFire) { bCanFire = bFire; }
	FORCEINLINE void SetFireRate(float rate) { fireRate = rate; }
	FORCEINLINE void SetVelocidad(float vel) { velocidad = vel; }

	FORCEINLINE float GetFireRate() { return fireRate; }
	FORCEINLINE float GetVelocidad() { return velocidad; }
	FORCEINLINE bool GetCanMove() { return bCanMove; }
	FORCEINLINE bool GetCanFire() { return bCanFire; }
};
