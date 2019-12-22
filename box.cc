#include <iostream>
#include <memory>
#include "box.h"
#include "piece.h"
using namespace std;

Box::Box(): hasPiece{false}, p{nullptr} {}

Box::Box(unique_ptr<Piece> p): hasPiece{true}, p{p} {}


