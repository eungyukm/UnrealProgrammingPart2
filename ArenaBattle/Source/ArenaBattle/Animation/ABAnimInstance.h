// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ABAnimInstance.generated.h"

/**
 * 
 */
class ARENABATTLE_API ABAnimInstance : public UAnimInstance
{
public:
	ABAnimInstance();
	~ABAnimInstance();

protected:
	// Called when the game starts or when spawned
	virtual void NativeInitializeAnimation() override;
	// Called every frame
	virtual void NativeUpdateAnimaton(float DeltaSeconds);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category= Character)
	TObjectPtr<class ACharacter> Owner;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category= Character)
	TObjectPtr<class UCharacterMovementComponent> Movement;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= Character)
	FVector Velocity;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= Character)
	float GroundSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= Character)
	uint8 bIsInAir : 1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= Character)
	uint8 bIsFalling : 1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= Character)
	uint8 bIsJumping : 1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= Character)
	float jumpingThreshold;
};
