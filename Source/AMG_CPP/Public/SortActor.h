#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SortActor.generated.h"

UCLASS()
class AMG_CPP_API ASortActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ASortActor();

public:
	UPROPERTY(BlueprintReadWrite, VisibleInstanceOnly, Category = "Sort")
	TArray<int32> IntArray;

	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category = "Sort")
	int32 Num = 30;

	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category = "Sort")
	int32 RandomMin = 0;

	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category = "Sort")
	int32 RandomMax = 1000;

public:
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Sort")
	void Reset();

	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Sort")
	void Sort();
};
