// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerVolume.h"
#include "GameFramework/Actor.h"
#include "OpenDoor.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TEST03_API UOpenDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOpenDoor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	void OpenDoor();

	void CloseDoor();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	UPROPERTY(EditAnywhere)
	float OpenAngle = 0.0f;
	UPROPERTY(EditAnywhere)
	float CloseAngle = -90.0f;
	UPROPERTY(EditAnywhere)
	ATriggerVolume* PressurePlate;
//	UPROPERTY(EditAnywhere)
	AActor* ActorThatOpen;
	UPROPERTY(EditAnywhere)
	float delay = 1.f;
	UPROPERTY(VisibleAnywhere)
	float lastTime;


	AActor* Owner;
};
