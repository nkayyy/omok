#ifdef PIECE_H
#define PIECE_H

class Piece {
    std::string type; // type is either "White" or "Black"
    int row;
    int col;

    public:
    Piece(std::string type, int row, int col);
    int getRow();
    int getCol();
};
#endif
