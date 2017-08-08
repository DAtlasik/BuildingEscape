// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "Components/ActorComponent.h"
#include "OpenDoor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API UOpenDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOpenDoor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

<<<<<<< HEAD
	void OpenDoor();
	void CloseDoor();

=======
>>>>>>> parent of d2dfab3... trigger volume Pressure Plate opens door when steeped into.
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	
private:
	UPROPERTY(EditAnywhere)
		float OpenAngle = -20.0f;

	UPROPERTY(EditAnywhere)
		ATriggerVolume* PressurePlate;

<<<<<<< HEAD
	UPROPERTY(EditAnywhere)
		float DoorCloseDelay = 1.0f;

	float LastDoorOpenTime;

	AActor* ActorThatOpens;
	AActor* Owner; // the owning door.
=======
>>>>>>> parent of d2dfab3... trigger volume Pressure Plate opens door when steeped into.
};
