#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "MovePointsActor.generated.h"

UCLASS()
class AMG_CPP_API AMovePointsActor : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:
	AMovePointsActor();
	
	//~ Begin AActor Interface.
	virtual void Tick(float DeltaSeconds) override;
	//~ End AActor Interface.
	
public:
	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category = "Settings")
	TArray<FVector> Points;

	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category = "Settings")
	float WaitTime = 1.f;

	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category = "Settings")
	float MoveTime = 1.f;

private:
	float CurrentWaitTime = 0.f;
	float CurrentMoveTime = 0.f;

	int32 PointIndex = 0;

	FVector StartLocation;
	FVector EndLocation;
};