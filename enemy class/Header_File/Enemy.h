#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interfaces/HitInterface.h"
#include "Enemy.generated.h"

class UAnimMontage;

UCLASS()

class SLASH_API AEnemy : public ACharacter, public IHitInterface
{
	GENERATED_BODY()

	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:

	/**
	* Animation montages
	*/
	UPROPERTY(EditDefaultsOnly, Category = Montages)
	UAnimMontage* HitReactMontage;

	virtual void GetHit(const FVector& ImpactPoint) override;
protected:

	/**
	* Play montage functions
	*/
	void PlayHitReactMontage(const FName& SectionName);
	virtual void BeginPlay() override;

public:	

};