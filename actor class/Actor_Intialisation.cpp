#include "Items/Item.h"
 
 AItem::AItem()
 {
 	PrimaryActorTick.bCanEverTick = true;
 }
 
 void AItem::BeginPlay()
 {
 	Super::BeginPlay();
 
 	UE_LOG(LogTemp, Warning, TEXT("Begin Play called!"));
 }
 
 void AItem::Tick(float DeltaTime)
 {
 	Super::Tick(DeltaTime);
 }