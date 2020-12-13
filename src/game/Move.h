/// game/Move.h
///
/// Struct representing a move
///
/// @author Brendan Grau
/// License: GNU GPLv3
///////////////////////////////////////////////////////////////////////////////

#ifndef CHECKERS_MOVE_H
#define CHECKERS_MOVE_H

#include <string>


struct Move
{
    bool color;
    bool isJump;
    std::pair<int, int> move;

    std::string toString(){
        return move.first + " " + move.second;
    }
};


#endif //CHECKERS_MOVE_H
