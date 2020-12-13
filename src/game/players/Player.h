/// game/players/Player.h
///
/// Base class for various players
///
/// @author Brendan Grau
/// License: GNU GPLv3
///////////////////////////////////////////////////////////////////////////////

#ifndef CHECKERS_PLAYER_H
#define CHECKERS_PLAYER_H


#include <vector>
#include "../Move.h"

class Player
{
protected:
    /// 0 = black, 1 = white
    bool color = 0;

public:

    /// Get the players color
    bool getColor();

    /// Run a singe turn for a player
    virtual void playTurn(std::vector<Move>);

};


#endif //CHECKERS_PLAYER_H
