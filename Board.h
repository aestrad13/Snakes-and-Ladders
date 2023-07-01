//
// Created by Armando Estrada on 09/06/23.
//

#ifndef SERPIENTESYESCALERAS_BOARD_H
#define SERPIENTESYESCALERAS_BOARD_H

#include "Tile.h"
#include "Object.h"


class Board:public Object {
public:
    Board();

    void print() override;
    Tile* tiles[30];


};


#endif //SERPIENTESYESCALERAS_BOARD_H
