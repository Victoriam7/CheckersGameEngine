/// view_controller/GUI.h
///
/// Class to handle gui component of view
///
/// @author Brendan Grau
/// License: GNU GPLv3
///////////////////////////////////////////////////////////////////////////////

#ifndef CHECKERS_GUI_H
#define CHECKERS_GUI_H
#include "olcPixelGameEngine.h"
#include "View.h"


class GUI : public olc::PixelGameEngine
{
public:
    GUI();

    // Called on creation of object
    bool OnUserCreate() override;

    // game loop
    bool OnUserUpdate(float fElapsedTime) override;
};


#endif //CHECKERS_GUI_H
