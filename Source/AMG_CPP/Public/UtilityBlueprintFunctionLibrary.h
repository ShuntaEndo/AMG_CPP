#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UtilityBlueprintFunctionLibrary.generated.h"

UCLASS()
class AMG_CPP_API UUtilityBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static bool OpenSaveFolder();

	UFUNCTION(BlueprintCallable)
	static bool CreateTxtFile(const FText& Text);
};
