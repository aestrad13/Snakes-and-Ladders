//
// Created by Armando Estrada on 09/06/23.
//

#ifndef SERPIENTESYESCALERAS_TILE_H
#define SERPIENTESYESCALERAS_TILE_H

#include "Object.h"
#include "Dice.h"
#include<iostream>
using namespace std;


class Tile:public Object{
public:
    Tile();
    Tile(string,int);

    void print() override;
    string getType() const;
    int getNumber();

private:
    string type;
    int number;


};



#endif //SERPIENTESYESCALERAS_TILE_H
