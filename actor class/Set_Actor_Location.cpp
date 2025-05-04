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

 // following code will set the actor location to (0, 0, 50) in the world space.
 // the actor will be moved to this location when the game starts.
 	SetActorLocation(FVector(0.f, 0.f, 50.f));
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