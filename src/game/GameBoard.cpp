/// game/GameBoard.cpp
///
/// @author Brendan Grau
/// License: GNU GPLv3
///////////////////////////////////////////////////////////////////////////////

#include "GameBoard.h"

GameBoard::GameBoard()
{
    board = new std::vector<int>{1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
}

GameBoard::~GameBoard()
{
    delete board;
}

std::string* GameBoard::toString()
{
    std::string* s = new std::string;
    s->append("┌────┬────┬────┬────┬────┬────┬────┬────┐\n");
    for(int i = 0; i < BOARD_HEIGHT; i++)
    {
        if(i % 2 == 0)
            s->append("|    ");
        for (int j = 0; j < BOARD_WIDTH; j++)
        {
            int piece = (*board)[i * BOARD_WIDTH + j];
            s->append("| ");
            if(piece == 0)
                s->append(" ");
            else if(piece > 0)
                s->append("B");
            else
                s->append("W");
            if(piece == 0)
                s->append(" ");
            else if(abs(piece) == 1)
                s->append("P");
            else
                s->append("K");
            switch()
            {
                case 0:
                    s->append("|    |    ");
                    break;

                case 1:
                    s->append("| BP |    ");
                    break;

                case 2:
                    s->append("| BK |    ");
                    break;

                case -1:
                    s->append("| WP |    ");
                    break;

                case -2:
                    s->append("| WK |    ");
                    break;
            }
        }
        if(i % 2 != 0)
            s->append("|");
        if(i != BOARD_HEIGHT - 1)
            s->append("\n├────┼────┼────┼────┼────┼────┼────┼────┤\n");
        else
            s->append("\n└────┴────┴────┴────┴────┴────┴────┴────┘\n");
    }
    return s;
}

