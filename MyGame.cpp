//
// Created by Armando Estrada on 09/06/23.
//

#include "MyGame.h"
#include "Board.h"
#include "Tile.h"
#include "Dice.h"
#include "Player.h"
#include<iostream>

using namespace std;

void MyGame::start() {
    Board board;
    Player player1("Player 1", 1);
    Player player2("Player 2", 2);
    Dice dice;

    int turn = 1;
    bool gameOver = false;

    while (gameOver == false) {
        cout << "Turn " << turn << endl;

        int numDado = dice.roll();
        player1.move(numDado);

        if (player1.getPosition() == 29) {
            cout << "-- GAME OVER --"<< endl;
            cout << "Player 1 is the winner!!!" << endl;
            gameOver = true;
        }

        cout << "Press C to continue next turn, or E to end the game: ";
        char input;
        cin >> input;
        while (input != 'C' && input != 'E') {
            cout << "Invalid option, please press C to continue next turn or E to end the game." << endl;
            cin >> input;
        }

        if (input == 'E') {
            cout << "Thanks for playing!!!" << endl;
            gameOver = true;
        }

        int numDado2 = dice.roll();
        player2.move(numDado2);

        if (player2.getPosition() == 29) {
            cout << "-- GAME OVER --"<< endl;
            cout << "Player 2 is the winner!!!" << endl;
            gameOver = true;
        }

        cout << "Press C to continue next turn, or E to end the game: ";
        char input2;
        cin >> input2;
        while (input2 != 'C' && input2 != 'E') {
            cout << "Invalid option, please press C to continue next turn or E to end the game." << endl;
            cin >> input2;
        }

        if (input2 == 'E') {
            cout << "Thanks for playing!!!" << endl;
            gameOver = true;
        }


        turn++;
    }

}