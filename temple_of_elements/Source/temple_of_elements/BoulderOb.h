// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "BoulderOb.generated.h"

UCLASS()
class TEMPLE_OF_ELEMENTS_API ABoulderOb : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoulderOb();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

  // Returns the mesh for the boulder
  FORCEINLINE class UStaticMeshComponent* GetMesh() const { return BoulderMesh; }

  // Return whether or not the boulder is active
  UFUNCTION(BlueprintPure, Category = "BoulderOb")
  bool IsActive();

  // Allows other classes to change whether is active or not
  UFUNCTION(BlueprintCallable, Category = "BoulderOb")
    void SetActive(bool NewBoulderState);

protected:
  // True when boulder is active, false when untriggered
  bool bIsActive; 

private:
  // The boulder mesh component
  UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BoulderOb", meta = (AllowPrivateAccess = "true"))
  class UStaticMeshComponent* BoulderMesh;

	
	
};
