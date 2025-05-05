
// the following program is updated header file.

#pragma once

#include "CoreMinimal.h"
UCLASS()
class MYPROJECT_API Aitems : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Aitems();
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned

private:
 	// provide sine wave movement to the actor.
 	// Movement rate in units of cm/s
 	float RunningTime;
 	float Amplitude = 0.25f;
 	float TimeConstant = 5.f;
};