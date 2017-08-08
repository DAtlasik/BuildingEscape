// Fill out your copyright notice in the Description page of Project Settings.

#include "OpenDoor.h"
#include "Gameframework/Actor.h"


// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();
<<<<<<< HEAD
	Owner = GetOwner();
	ActorThatOpens = GetWorld()->GetFirstPlayerController()->GetPawn();

}

void UOpenDoor::OpenDoor()
{
	Owner->SetActorRotation(FRotator(0.0f, OpenAngle, 0.0f));
=======

	// finding the owning Actor
	AActor* Owner = GetOwner();

	// create rotator
	FRotator NewRotation = FRotator(0.0f, -20.0f, 0.0f);

	// set the door rotation
	Owner->SetActorRotation(NewRotation);

	//UE_LOG(LogTemp, Warning, TEXT("%s rotation is %s!"), *Owner, *Rotation);

>>>>>>> parent of d2dfab3... trigger volume Pressure Plate opens door when steeped into.
}

void UOpenDoor::CloseDoor()
{
	Owner->SetActorRotation(FRotator(0.0f, -90.0f, 0.0f));
}

// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

<<<<<<< HEAD
	// Poll the trigger volume
	if (PressurePlate->IsOverlappingActor(ActorThatOpens)) 
	{
	// if the actor that opens is in the volume then we open the door.
		OpenDoor();
		LastDoorOpenTime = GetWorld()->GetTimeSeconds();

	}

	// Check if it is time to close door.
	if (GetWorld()->GetTimeSeconds() - LastDoorOpenTime > DoorCloseDelay) {
		CloseDoor();
	}


=======
	// ...
>>>>>>> parent of d2dfab3... trigger volume Pressure Plate opens door when steeped into.
}
