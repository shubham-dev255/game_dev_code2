#include "Items/Item.h"
#include "Slash/DebugMacros.h"
 
AItem::AItem()
{
    PrimaryActorTick.bCanEverTick = true;
}
 
void AItem::BeginPlay()
{
	Super::BeginPlay();
 
 	UWorld* World = GetWorld();
 
 	SetActorLocation(FVector(0.f, 0.f, 50.f));
    // tthis will set the actor rotation to (0, 45, 0) in the world space.
 	// the actor will be rotated to this rotation when the game starts.
 	SetActorRotation(FRotator(0.f, 45.f, 0.f));
 	FVector Location = GetActorLocation();
 	FVector Forward = GetActorForwardVector();
 	DRAW_SPHERE(Location);
 	//DRAW_LINE(Location, Location + Forward * 100.f);
 	//DRAW_POINT(Location + Forward * 100.f);
 	DRAW_VECTOR(Location, Location + Forward * 100.f);
 
}
 
void AItem::Tick(float DeltaTime)
{
 	Super::Tick(DeltaTime);
}