//
// Created by Armando Estrada on 09/06/23.
//

#ifndef SERPIENTESYESCALERAS_PLAYER_H
#define SERPIENTESYESCALERAS_PLAYER_H

#include "Object.h"
#include "Dice.h"
#include "Board.h"

#include<string>

using namespace std;


class Player {
public:
    Player(string,int);

    void print();
    string getName();
    int getPosition();
    void move(int);

private:
    string name;
    int position;
    Board board;
    Tile currentTile;
};


#endif //SERPIENTESYESCALERAS_PLAYER_H
