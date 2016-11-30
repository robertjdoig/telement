// Fill out your copyright notice in the Description page of Project Settings.

#include "temple_of_elements.h"
#include "BoulderOb.h"


// Sets default values
ABoulderOb::ABoulderOb()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ABoulderOb::BeginPlay()
{
	Super::BeginPlay();

  

  BoulderMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Boulder Mesh"));
  RootComponent = BoulderMesh;
	
}

// Called every frame
void ABoulderOb::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Returns active state
bool ABoulderOb::IsActive() {
  return bIsActive; 
}

// Changes active state
void ABoulderOb::SetActive(bool NewBoulderState) {
  bIsActive = NewBoulderState;

}

