//
// Created by javal on 12/25/2020.
//
#include <iostream>
using namespace std;
#include "Board.h"

void Board::display() {
    char file = 65;
    char rank = 49;

    cout<<"  ";
    for(int i=0; i<8; i++){
        cout<<" "<< rank++ <<" ";
    }
    cout<<endl;

    for(int i=0; i<8; i++){
        cout<<file++<<" ";
        for(int k=0; k<8; k++){
            cout<<"["<<board[i][k]<<"]";
        }
        cout<<endl;
    }
}

Board::Board() {
    board[0][0] = 'R';
    board[0][1] = 'N';
    board[0][2] = 'B';
    board[0][3] = 'K';
    board[0][4] = 'Q';
    board[0][5] = 'B';
    board[0][6] = 'N';
    board[0][7] = 'R';

    for (int i = 0; i < 8; ++i) {
        board[1][i] = 'P';
    }

    for (int i = 2; i < 6; i++) {
        for (int k = 0; k < 8; k++) {
            board[i][k] = '-';
        }
    }

    for (int i = 0; i < 8; ++i) {
        board[6][i] = 'p';
    }

    board[7][0] = 'r';
    board[7][1] = 'n';
    board[7][2] = 'b';
    board[7][3] = 'k';
    board[7][4] = 'q';
    board[7][5] = 'b';
    board[7][6] = 'n';
    board[7][7] = 'r';

}