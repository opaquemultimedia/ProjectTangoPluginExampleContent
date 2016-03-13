

#include "TangoExampleContent.h"
#include "GridLookupComponent.h"


// Sets default values for this component's properties
UGridLookupComponent::UGridLookupComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = false;
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UGridLookupComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UGridLookupComponent::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

bool UGridLookupComponent::LookupGridPosition(FIntVector GridPosition)
{
	if (!LookupTable.Contains(GridPosition)) {
		LookupTable.Add(GridPosition, LookupTable.Num());
		return true;
	}
	return false;
}

void UGridLookupComponent::ClearGrid()
{
	LookupTable.Reset();
}