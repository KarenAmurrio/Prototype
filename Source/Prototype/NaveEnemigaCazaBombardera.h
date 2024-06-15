
#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaCazaBombardera.generated.h"
/**
 * 
 */
UCLASS()
class PROTOTYPE_API ANaveEnemigaCazaBombardera : public ANaveEnemigaCaza
{
	GENERATED_BODY()

public:
	ANaveEnemigaCazaBombardera();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:

public:
	virtual void Disparar() override;
	//virtual void Mover() override;

};
