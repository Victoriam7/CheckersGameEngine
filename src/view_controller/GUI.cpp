/// view_controller/GUI.c
///
/// @author Brendan Grau
/// License: GNU GPLv3
///////////////////////////////////////////////////////////////////////////////

#include "GUI.h"

GUI::GUI()
{
    sAppName = "Example";
}

bool GUI::OnUserCreate()
{
    return true;
}

bool GUI::OnUserUpdate(float fElapsedTime)
{
    // called once per frame, draws random coloured pixels
    for (int x = 0; x < ScreenWidth(); x++)
        for (int y = 0; y < ScreenHeight(); y++)
            Draw(x, y, olc::Pixel(rand() % 256, rand() % 256, rand()% 256));
    return true;
}

void GUI::render()
{

}

void GUI::run()
{
    this->Start();
}

void GUI::setup()
{
    this->Construct(256, 240, 1, 1);
}
