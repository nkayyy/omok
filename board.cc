#include "box.h"
#include "board.h"
#include <iostream>
#include <memory>
using namespace std;

Board::Board() {}

void Board::init() {
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            gameboard[i][j]=make_shared<Box>();
        }
    }     
}

void Board::renderText() {}
