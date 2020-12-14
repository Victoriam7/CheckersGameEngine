/// game/GameBoard.h
///
/// Game board handling validation and the board itself
/// The board is stored as a size 32 int vector as represented by standard
/// draughts notation with negative representing white positive representing
/// black and zero representing an empty square. One is a pawn and 2 is a king.
///
/// @author Brendan Grau
/// License: GNU GPLv3
///////////////////////////////////////////////////////////////////////////////

#ifndef CHECKERS_GAMEBOARD_H
#define CHECKERS_GAMEBOARD_H

#define BOARD_WIDTH 4
#define BOARD_HEIGHT 8

#include <memory>
#include <vector>
#include <string>

class GameBoard
{
private:
    std::vector<int>* board;


public:
    GameBoard();

    ~GameBoard();

    /// Convert board to a string
    std::string* toString();
};


#endif //CHECKERS_GAMEBOARD_H
