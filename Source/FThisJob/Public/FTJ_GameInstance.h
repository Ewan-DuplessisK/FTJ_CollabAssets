// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseGameInstance.h"
#include "ScoringSystem/FTJ_ScoringSystem_Score.h"
#include "FTJ_GameInstance.generated.h"

/**
 * 
 */
UCLASS()
class FTHISJOB_API UFTJ_GameInstance : public UBaseGameInstance
{
	GENERATED_BODY()
	virtual void Init() override;

public:
	UFTJ_ScoringSystem_Score* GetScoringComponent(){return ScoringComponent;}
	
private:
	UFTJ_ScoringSystem_Score* ScoringComponent = nullptr;
	
};
