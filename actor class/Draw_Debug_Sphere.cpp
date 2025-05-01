#include "Items/Item.h"
 #include "DrawDebugHelpers.h"
 #include "Slash/Slash.h"
 
 #define THIRTY 30
 
 AItem::AItem()
 {

 	{
 		GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan, FString("Item OnScreen Message!"));
 	}
 
 	UWorld* World = GetWorld();
 
 	FVector Location = GetActorLocation();
 	DRAW_SPHERE(Location)
 
 	
 }
 
 void AItem::Tick(float DeltaTime)
 {
 	Super::Tick(DeltaTime);
 
 	UE_LOG(LogTemp, Warning, TEXT("DeltaTime: %f"), DeltaTime);
 
 	if (GEngine)
 	{
 		FString Name = GetName();
 		FString Message = FString::Printf(TEXT("Item Name: %s"), *Name);
 		GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan, Message);
 
 		UE_LOG(LogTemp, Warning, TEXT("Item Name: %s"), *Name);
 	}
 }