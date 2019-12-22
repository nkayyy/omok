#ifndef PLAYER_H
#define PLAYER_H
#include <memory>

class Board;
class Player {
    std::unique_ptr<Board> gameboard;
    public:
    Player(std::unique_ptr<Board> gameboard);
};

#endif
