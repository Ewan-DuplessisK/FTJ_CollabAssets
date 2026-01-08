// Fill out your copyright notice in the Description page of Project Settings.


#include "FTJ_GameInstance.h"

void UFTJ_GameInstance::Init()
{
	ScoringComponent = CreateDefaultSubobject<UFTJ_ScoringSystem_Score>("ScoringComponent",false);
}
