//
// Created by Armando Estrada on 09/06/23.
//

#include "Dice.h"

#include<cstdlib>

Dice::Dice()
{
    srand((int)time(0));
}

int Dice::roll()
{
    return rand() % 6+1;
}

