// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/TextRenderComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Resources_M.generated.h"

UCLASS()
class GAM312_BLAIR_API AResources_M : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AResources_M();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//resource collection for wood
	UPROPERTY(EditAnywhere)
		FString resourceName = "Wood";

	//amount gained per harvest
	UPROPERTY(EditAnywhere)
		int resourceAmount = 5;

	//amount able to gather per resource
	UPROPERTY(EditAnywhere)
		int totalResource = 100;

	UPROPERTY()
		FText tempText;

	UPROPERTY(EditAnywhere)
		UTextRenderComponent* ResourceNameTxt;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* Mesh;


};
