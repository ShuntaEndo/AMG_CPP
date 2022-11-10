#include "MovePointsActor.h"

AMovePointsActor::AMovePointsActor()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AMovePointsActor::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (CurrentWaitTime < WaitTime)
	{
		// Wait
		CurrentWaitTime += DeltaSeconds;
		if (CurrentWaitTime >= WaitTime)
		{
			// End Wait
			StartLocation = GetActorLocation();
			EndLocation   = Points[PointIndex];
		}
	}
	else
	{
		// Move
		CurrentMoveTime += DeltaSeconds;
		if (CurrentMoveTime < MoveTime)
		{
			SetActorLocation(StartLocation + (EndLocation - StartLocation) * (CurrentMoveTime / MoveTime));
		}
		else
		{
			// End Move
			SetActorLocation(EndLocation);
			CurrentWaitTime = 0.f;
			CurrentMoveTime = 0.f;
			PointIndex = (PointIndex + 1) % Points.Num();
		}
	}
}