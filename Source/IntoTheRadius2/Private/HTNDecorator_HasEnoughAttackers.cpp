#include "HTNDecorator_HasEnoughAttackers.h"

UHTNDecorator_HasEnoughAttackers::UHTNDecorator_HasEnoughAttackers() {
    this->bCheckConditionOnTick = false;
    this->bCheckAlreadyAttacking = false;
    this->ExpectedAttackers = 1;
}


