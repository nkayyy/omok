#ifndef Board_H
#define Board_H
#include "box.h"
#include <memory>

class Board: public Box {
    
    public:
    std::shared_ptr<Box> boxes[rows][cols];
    Board();
    void renderText();

};

#endif
