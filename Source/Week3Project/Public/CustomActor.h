// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CustomActor.generated.h"

UCLASS()
class WEEK3PROJECT_API ACustomActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACustomActor();
	UPROPERTY(Category = "myCategory", VisibleAnywhere, BlueprintReadWrite)
	USceneComponent* SceneComponent;

	UPROPERTY(Category = "myCategory", VisibleAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* StaticMeshComponent;

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
