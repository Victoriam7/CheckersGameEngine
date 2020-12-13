/// game/GameManager.h
///
/// Class to handle all running games and allow training of AI
///
/// @author Brendan Grau
/// License: GNU GPLv3
///////////////////////////////////////////////////////////////////////////////

#ifndef CHECKERS_GAMEMANAGER_H
#define CHECKERS_GAMEMANAGER_H


#include <vector>
#include "modes/GameMode.h"

class GameManager
{
private:
    std::vector<GameMode> games;

public:
    GameManager();

    /// Function to play a single game
    void createSingleGame();

    /// Function to train the ai by competing in games
    void trainAi();
};


#endif //CHECKERS_GAMEMANAGER_H
