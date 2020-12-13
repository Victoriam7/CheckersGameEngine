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
        return std::to_string(move.first) + " " + std::to_string(move.second);
    }
};


#endif //CHECKERS_MOVE_H
