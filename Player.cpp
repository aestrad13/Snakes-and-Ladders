//
// Created by Armando Estrada on 09/06/23.
//

#include "Player.h"
#include "Tile.h"
#include<string>
#include<iostream>

using namespace std;

Player::Player(string nom,int pos)
{
    name=nom;
    position=pos;
}

string Player::getName()
{
    return name;
}

int Player::getPosition()
{
    return position;
}

void Player::print()
{
    cout << name << " " << position << endl;
}

void Player::move(int numDado)
{
    position+=numDado;

    if (position > 29) {
        position = 29;
    }

    Tile* tile = board.tiles[position];

    if (tile->getType()=="L") {
        position += 3;
    } else if (tile->getType()=="S") {
        position -= 3;
    }
    currentTile=*tile;


    cout << "" << name << " rolled a " << numDado << " and moved to tile " << position << " (" << currentTile.getType() << ")" << endl;
}

