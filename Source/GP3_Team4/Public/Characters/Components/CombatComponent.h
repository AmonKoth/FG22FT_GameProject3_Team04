// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CombatComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GP3_TEAM4_API UCombatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	

	UCombatComponent();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	UFUNCTION(BlueprintCallable)
		bool GetHasStormDamage(){return bHasStormDamage ;}
	UFUNCTION(BlueprintCallable)
		bool GetHasWindDamage(){return bHasWindDamage ;}
	UFUNCTION(BlueprintCallable)
		bool GetHasFireDamage() { return bHasFireDamage; }
protected:

	virtual void BeginPlay() override;

private:

	bool bHasStormDamage = false;
	bool bHasWindDamage = false;
	bool bHasFireDamage = false;	
};
