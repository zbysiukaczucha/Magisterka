// Fill out your copyright notice in the Description page of Project Settings.


#include "DataExporter.h"
#include "Misc/FileHelper.h"

bool UDataExporter::SaveStringToCSV(FString TextToSave, FString FilePath)
{
	// Ta jedna funkcja z API silnika robi całą magię zapisu
	return FFileHelper::SaveStringToFile(TextToSave, *FilePath);
}