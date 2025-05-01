#include "Items/Item.h"
 
 AItem::AItem()
 {
 	PrimaryActorTick.bCanEverTick = true;
 }
 
 void AItem::BeginPlay()
 {
 	Super::BeginPlay();
 
 	UE_LOG(LogTemp, Warning, TEXT("Begin Play called!"));

 //changes than previous code:

 	if (GEngine)
 	{
 		GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan, FString("Item OnScreen Message!"));
 	}
    // This will print the message to the screen for 60 seconds.
 }
 
 void AItem::Tick(float DeltaTime)
 {
 	Super::Tick(DeltaTime);
 }