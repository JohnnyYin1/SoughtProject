// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GeometryCacheHelper.generated.h"
#include "GeometryCacheComponent.h"

/**
 * 
 */
UCLASS()
class SOUGHT_API UGeometryCacheHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
};

public:
    /** ��ͷ���� Geometry Cache����ֹ���ٺ���֡�� */
    UFUNCTION(BlueprintCallable, Category = "Geometry Cache")
    static void PlayFromStart(UGeometryCacheComponent* CacheComponent);
};
