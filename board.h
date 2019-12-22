#ifndef Board_H
#define Board_H
#include "box.h"
#include <memory>

class Board: public Box {
    static const int rows=15;
    static const int cols=15;

    public:
    std::shared_ptr<Box> gameboard[rows][cols];
    Board();
    void init();
    void renderText();

};

#endif
