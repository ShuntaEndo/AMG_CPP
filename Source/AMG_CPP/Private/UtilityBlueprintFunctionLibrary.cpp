#include "UtilityBlueprintFunctionLibrary.h"

bool UUtilityBlueprintFunctionLibrary::OpenSaveFolder()
{
	FString SavePath = FPaths::ConvertRelativePathToFull(FPaths::ProjectSavedDir());
	if (FPaths::DirectoryExists(SavePath))
	{
		FPlatformProcess::ExploreFolder(*SavePath);
		return true;
	}
	return false;
}

bool UUtilityBlueprintFunctionLibrary::CreateTxtFile(const FText& Text)
{
	FString Filename = FString::Printf(TEXT("%s.txt"), *FDateTime::Now().ToString(TEXT("%Y%m%d_%H%M%S")));
    FString SavePath = FPaths::ConvertRelativePathToFull(FPaths::ProjectSavedDir());

    return FFileHelper::SaveStringToFile(Text.ToString(), *FString(SavePath + "/" + Filename), FFileHelper::EEncodingOptions::ForceUTF8);
}