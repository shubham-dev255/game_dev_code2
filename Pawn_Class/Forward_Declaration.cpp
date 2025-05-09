#include "Pawns/Bird.h"
#include "Components/CapsuleComponent.h"

ABird::ABird()
{
	PrimaryActorTick.bCanEverTick = true;

	Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	Capsule->SetCapsuleHalfHeight(20.f);
	Capsule->SetCapsuleRadius(15.f);
	SetRootComponent(Capsule);
}

void ABird::BeginPlay()
{
	Super::BeginPlay();

}

void ABird::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
