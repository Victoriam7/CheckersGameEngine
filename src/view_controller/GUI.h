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


class GUI : public olc::PixelGameEngine, public View
{
public:
    GUI();

    /// See view.h for details
    void setup();

    /// See view.h for details
    void render();

    /// See view.h for details
    void run();

    // Called on creation of object
    bool OnUserCreate() override;

    // Game loop
    bool OnUserUpdate(float fElapsedTime) override;
};


#endif //CHECKERS_GUI_H
