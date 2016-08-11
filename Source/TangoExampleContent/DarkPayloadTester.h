

#pragma once

#include "GameFramework/Actor.h"
#include "TangoPointCloudComponent.h"
#include "DarkPayloadTester.generated.h"

UCLASS()
class TANGOEXAMPLECONTENT_API ADarkPayloadTester : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADarkPayloadTester();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UFUNCTION(BlueprintCallable,Category = "Dark Payload Testing")
		int32 ReceivePayload(UPointCloudContainer* Container,FVector& RanVec)
	{
		float Time;
		if (Container->GetPointCloudArray(Time).Num() > 0)
		{
			RanVec = Container->GetPointCloudArray(Time)[FMath::RandRange(0, Container->GetPointCloudArray(Time).Num() - 1)];
		}
		return Container->GetPointCloudArray(Time).Num();
	}
	
};
