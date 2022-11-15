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
	TArray<FString> StringArray =
		{
		"Apple",
		"Orange",
		"Strawberry",
		"Cherry",
		"Banana",
		"Peach",
		"Lemon"
		};

public:
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Sort")
	void Shuffle();

	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Sort")
	void Sort();
};
