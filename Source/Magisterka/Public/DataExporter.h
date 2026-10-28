// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DataExporter.generated.h"

/**
 * 
 */
UCLASS()
class MAGISTERKA_API UDataExporter : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Custom Data Export")
	static bool SaveStringToCSV(FString TextToSave, FString FilePath);
};
