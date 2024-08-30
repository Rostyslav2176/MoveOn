// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Test.generated.h"


USTRUCT(BlueprintType)
struct FAverages
{
	FAverages() :
		Mean(0.0f),
		Modal(0.0f),
		Median(0.0f){};

	FAverages(float InMean, float InMode, float InMedian) :

	Mean(InMean),
	Modal(InMode),
	Median(InMedian) {};
	
	
	

	UPROPERTY(BlueprintReadOnly)
	float Mean = 0.0f;
	
	UPROPERTY(BlueprintReadOnly)
	float Modal = 0.0f;

	UPROPERTY(Blueprintable)
	float Median = 0.0f;

	
	GENERATED_BODY()
};
/**
 * 
 */
UCLASS()
class MOVEON_API UTest : public UBlueprintFunctionLibrary
{
public:
	
	UFUNCTION(BlueprintCallable)
	static FString GetPointlessMassage();

	UFUNCTION(BlueprintCallable,
		meta = (ToolTip = "3.1415...",
			CompactNodeTitle = "π"))
	static double GetMyPi();

	UFUNCTION(BlueprintCallable,
		meta=(ToolTip = "Calculate the mean, modal and meadian for the array of integer values"))
	static FAverages CalculateAverages(const TArray<int32>& InValues);

protected:

private:

	static constexpr double Pi = 3.1415926535897932384626433832795;
	
	
	GENERATED_BODY()
	
};
