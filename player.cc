#include "player.h"
#include "board.h"
#include <memory>
using namespace std;

Player::Player(unique_ptr<Board> gameboard): gameboard{make_unique<Board>(gameboard)} {}
