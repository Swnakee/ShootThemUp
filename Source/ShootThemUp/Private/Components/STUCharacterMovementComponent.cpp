// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/STUCharacterMovementComponent.h"
#include "Player/STUBaseCharacter.h"

float USTUCharacterMovementComponent::GetMaxSpeed() const
{
    const float MaxSpeed = Super::GetMaxSpeed();
    const ASTUBaseCharacter *Palyer = Cast<ASTUBaseCharacter>(GetPawnOwner());
    return Palyer && Palyer->IsRunning() ? MaxSpeed * RunModifier : MaxSpeed;
}