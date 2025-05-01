#include "Items/Item.h"
 
 AItem::AItem()
 {
 	PrimaryActorTick.bCanEverTick = true;
 }
 
 void AItem::BeginPlay()
 {
 	Super::BeginPlay();
 
 	UE_LOG(LogTemp, Warning, TEXT("Begin Play called!"));
 
 	if (GEngine)
 	{
 		GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan, FString("Item OnScreen Message!"));
 	}
 }
 
 void AItem::Tick(float DeltaTime)
 {
 	Super::Tick(DeltaTime);
 
 	UE_LOG(LogTemp, Warning, TEXT("DeltaTime: %f"), DeltaTime);

 // chnages in the code from the previous one:
 	if (GEngine)
 	{
 		FString Name = GetName();
 		FString Message = FString::Printf(TEXT("Item Name: %s"), *Name);
 		GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan, Message);
 
 		UE_LOG(LogTemp, Warning, TEXT("Item Name: %s"), *Name);
 	}
    // This will print the message to the screen for 60 seconds.
    //this will print the message to the log for 60 seconds by using a tick function or frame to frame.
 }