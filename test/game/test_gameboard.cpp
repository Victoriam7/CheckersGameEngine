/// @author Brendan Grau
/// License: GNU GPLv3
///////////////////////////////////////////////////////////////////////////////

#define OLC_PGE_APPLICATION

#define CATCH_CONFIG_MAIN

#include <iostream>
#include "../catch_amalgamated.hpp"
#include "../../src/game/GameBoard.h"

TEST_CASE("Test GameBoard toString"){
    GameBoard board;
    std::cout << *(board.toString());
}