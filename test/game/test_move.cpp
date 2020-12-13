/// @author Brendan Grau
/// License: GNU GPLv3
///////////////////////////////////////////////////////////////////////////////

#define OLC_PGE_APPLICATION

#define CATCH_CONFIG_MAIN

#include <iostream>
#include "../catch_amalgamated.hpp"

#include "../../src/game/Move.h"

TEST_CASE("Test toString"){
    Move move;
    move.move = std::pair<int, int>{14, 7};
    REQUIRE(move.toString() == "14 7");
}