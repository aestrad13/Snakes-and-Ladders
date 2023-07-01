//
// Created by Armando Estrada on 09/06/23.
//

#include "Board.h"
#include<iostream>

using namespace std;

Board::Board() {
    for (int i = 0; i < 30; i++) {
        if (i == 6 || i == 11 || i == 23) {
            tiles[i] = new Tile("S", i);
        } else if (i == 10 || i == 15 || i == 26) {
            tiles[i] = new Tile("L", i);
        } else {
            tiles[i] = new Tile("N", i);
        }
    }
}

void Board::print()
{
    for (int i=0;i<30;i++) {
        cout << i << ": " << tiles[i]->getType() << endl;
    }
}

