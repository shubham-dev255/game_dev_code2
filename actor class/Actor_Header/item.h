
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

	// The visible anywhere macro is used to expose the variable to the editor.
	UPROPERTY(visibleAnywhere)
 	float RunningTime;
	// the UPROPERTY macro is used to expose the variable to the editor and make it visible to blueprints.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sine Parameters")
 	float Amplitude = 0.25f;
	// the UPROPERTY macro is used to expose the variable to the editor and make it visible to blueprints.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sine Parameters")
 	float TimeConstant = 5.f;
};