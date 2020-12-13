/// game/modes/GameMode.h
///
/// Base class for various game modes
///
/// @author Brendan Grau
/// License: GNU GPLv3
///////////////////////////////////////////////////////////////////////////////

#ifndef CHECKERS_GAMEMODE_H
#define CHECKERS_GAMEMODE_H

#include <memory>
#include "../players/Player.h"
#include "../GameRecorder.h"


class GameMode
{
private:
    GameRecorder recorder;

protected:
    std::unique_ptr<Player> playerOne;
    std::unique_ptr<Player> playerTwo;
    std::unique_ptr<Player> currentPlayer;




};


#endif //CHECKERS_GAMEMODE_H
