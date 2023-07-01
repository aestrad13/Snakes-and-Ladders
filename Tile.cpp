//
// Created by Armando Estrada on 09/06/23.
//

#include "Tile.h"
#include<iostream>

using namespace std;

Tile::Tile(string tipo,int num)
{
    type=tipo;
    number=num;
}

Tile::Tile() {
    number = 0;
    type = "";
}


void Tile::print()
{
    cout << number << " " << type << endl;
}



string Tile::getType() const {
    switch (number) {
        case 6:
        case 11:
        case 23:
            return "S";
        case 10:
        case 15:
        case 26:
            return "L";
        default:
            return "N";
    }
}


int Tile::getNumber()
{
    return number;
}




