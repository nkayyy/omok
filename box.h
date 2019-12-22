#ifndef BOX_H
#define BOX_H
#include <memory>

class Box {
    bool hasPiece;
    std::unique_ptr<Piece> *p;

    public:
    Box();
    Box(std::unique_ptr<Piece p> p);
    void renderText();

};

#endif
