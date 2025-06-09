#include "CoreMinimal.h"Add commentMore actions
#include "GameFramework/Character.h"
#include "Interfaces/HitInterface.h"
#include "Enemy.generated.h"

UCLASS()

class SLASH_API AEnemy : public ACharacter, public IHitInterface
{
	GENERATED_BODY()

@@ -17,9 +18,10 @@
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void GetHit(const FVector& ImpactPoint) override;
protected:
	virtual void BeginPlay() override;

public:	

};