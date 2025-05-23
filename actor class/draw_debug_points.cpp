#include "Items/Item.h"
#include "DrawDebugHelpers.h"
#include "Slash/Slash.h"
 
#define THIRTY 30
 
AItem::AItem()
{
 	PrimaryActorTick.bCanEverTick = true;
}
 
void AItem::BeginPlay()
{
 	Super::BeginPlay();
 
 	UWorld* World = GetWorld();
 	FVector Location = GetActorLocation();
 	FVector Forward = GetActorForwardVector();
 
 	DRAW_SPHERE(Location)
 	DRAW_LINE(Location, Location + Forward * 100.f)
 	DRAW_SPHERE(Location);
 	//DRAW_LINE(Location, Location + Forward * 100.f);
 	//DRAW_POINT(Location + Forward * 100.f);
 	DRAW_VECTOR(Location, Location + Forward * 100.f);
 
}
 
void AItem::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
 