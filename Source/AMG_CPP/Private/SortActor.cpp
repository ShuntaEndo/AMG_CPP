#include "SortActor.h"
#include "Kismet/KismetArrayLibrary.h"

ASortActor::ASortActor()
{
	PrimaryActorTick.bCanEverTick = false;
	Reset();
}

void ASortActor::Reset()
{
	IntArray.Empty();
	IntArray.AddUninitialized(Num);
	
	for (int32 i = 0; i < IntArray.Num(); i++)
	{
		IntArray[i] = FMath::RandRange(RandomMin, RandomMax);
	}
}

void ASortActor::Sort()
{
	IntArray.Sort();
}
