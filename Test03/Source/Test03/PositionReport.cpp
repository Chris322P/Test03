// Fill out your copyright notice in the Description page of Project Settings.

#include "PositionReport.h"
#include "GameFramework/Actor.h" //This is the change in PositionReport.cpp
#include "InfInt.h"

InfInt myint1 = "15432154865413186646848435184100510168404641560358";
InfInt myint2 = 156341300544608LL;
InfInt tstInt1 = "10000000000000000";
InfInt tstInt2 = "";


// Sets default values for this component's properties
UPositionReport::UPositionReport()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPositionReport::BeginPlay()
{
	Super::BeginPlay();
	

	FString ObjectName = GetOwner()->GetName();
	FString ObjectPos = GetOwner()->GetActorTransform().GetLocation().ToString();
	AActor *actor = GetOwner();
	FRotator rotation = FRotator(50.0f, 50.0f, 0.0f);
	actor->SetActorRotation(rotation);

	UE_LOG(LogTemp, Warning, TEXT("%s is at %s"), *ObjectName, *ObjectPos);


	myint1 *= --myint2 - 3;
	std::cout << myint1 << std::endl;

	std::string test = myint1.toString();


	FString test2 = tstInt1.toString().c_str();

	InfInt testInt = tstInt1 + 1;

	FString test3 = testInt.toString().c_str();

	UE_LOG(LogTemp, Warning, TEXT("%s _____ %s"), *test2, *test3);
	// ...
	
}

InfInt infTest = 1;

// Called every frame
void UPositionReport::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	//infTest = infTest * 2;

	//FString test3 = infTest.toString().c_str();

	//UE_LOG(LogTemp, Warning, TEXT("Zahl: %s"), *test3);
	// ...
}

