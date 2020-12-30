//
// Created by javal on 12/25/2020.
//
#include <iostream>
#include <cstring>
using namespace std;
#include "Board.h"

struct Piece{
    int x;
    int y;
};
string choosePiece(){
    string loc;
    cout << "Which Piece Do You Want To Move? ";
    cin >> loc;
    while(loc.size() != 2){
        //error
        cout<<"error. bad size"<<endl;
        cout << "Which Piece Do You Want To Move? ";
        cin >> loc;
    }
    while( (loc[0] < 65 || loc[0] > 72) &&
    (loc[0] < 97 || loc[0] > 104)){
        //error
        cout<<"error. file bad"<<endl;
        cout << "Which Piece Do You Want To Move? ";
        cin >> loc;
    }
    while((loc[1] < 49) || (loc[1] > 57)){
        //error
        cout<<"error. rank bad"<<endl;
        cout << "Which Piece Do You Want To Move? ";
        cin >> loc;
    }
    cout<<"good move.."<<endl;
    return loc;
}

string chooseWhereToMove(){
    string loc;
    cout << "Where Do You Want To Move? ";
    cin >> loc;
    while(loc.size() != 2){
        //error
        cout<<"error. bad size"<<endl;
        cout << "Where Do You Want To Move? ";
        cin >> loc;
    }
    while( (loc[0] < 65 || loc[0] > 72) && (loc[0] < 97 || loc[0] > 104)){
        //error
        cout<<"error. file bad"<<endl;
        cout << "Where Do You Want To Move? ";
        cin >> loc;
    }
    while((loc[1] < 49) || (loc[1] > 57)){
        //error
        cout<<"error. rank bad"<<endl;
        cout << "Where Do You Want To Move? ";
        cin >> loc;
    }
    cout<<"good move.."<<endl;
    return loc;
}

int main() {
    Board board;
    string loc;
//    while (true) {
//        loc = choosePiece();
//        movePiece(board, loc);
//        chooseWhereToMove();
//        //cin >> input;
//    }
    board.display();
}

