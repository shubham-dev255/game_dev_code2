
// the following program is updated header file.

#pragma once

#include "CoreMinimal.h"

enum class EItemState : uint8
{
	EIS_Hovering,
	EIS_Equipped
};

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
	virtual void BeginPlay() override;

	// the UPROPERTY macro is used to expose the variable to the editor and make it visible to event graphs.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sine Parameters")
	float Amplitude = 0.25f;
	// the UPROPERTY macro is used to expose the variable to the editor and make it visible to event graph.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sine Parameters")
	float TimeConstant = 5.f;

	UFUNCTION(BlueprintPure)
 	float TransformedSin();
 
 	UFUNCTION(BlueprintPure)
 	float TransformedCos();
	
	template<typename T>
	T Avg(T First, T Second);

	EItemState ItemState = EItemState::EIS_Hovering;	

	UPROPERTY(VisibleAnywhere)Add commentMore actions
	USphereComponent* Sphere;
	
private:
 	// provide sine wave movement to the actor.
 	// Movement rate in units of cm/s

	// The visible anywhere macro is used to expose the variable to the editor.
	UPROPERTY(visibleAnywhere)
 	float RunningTime;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* ItemMesh;

};

template<typename T>
inline T AItem::Avg(T First, T Second)
{
	return (First + Second) / 2;
}