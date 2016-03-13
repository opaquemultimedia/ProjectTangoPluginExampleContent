

#pragma once

#include "Components/ActorComponent.h"
#include "GridLookupComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Category="Tango Example" )
class TANGOEXAMPLECONTENT_API UGridLookupComponent : public UActorComponent
{
	GENERATED_BODY()
private:

	TMap<FIntVector, int32> LookupTable;
public:	
	// Sets default values for this component's properties
	UGridLookupComponent();

	// Called when the game starts
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

	UFUNCTION(BlueprintCallable, Category="Tango Example|Helper")
	bool LookupGridPosition(FIntVector GridPosition);
	
	UFUNCTION(BlueprintCallable, Category = "Tango Example|Helper")
	void ClearGrid();
};
