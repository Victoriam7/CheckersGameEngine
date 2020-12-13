/// view_controller/PTUI.h
///
/// Class to handle ptui component of view
///
/// @author Brendan Grau
/// License: GNU GPLv3
///////////////////////////////////////////////////////////////////////////////

#ifndef CHECKERS_PTUI_H
#define CHECKERS_PTUI_H

#include <iostream>
#include "View.h"


class PTUI : public View
{
public:
    PTUI();

    /// See view.h for details
    void setup() override;

    /// See view.h for details
    void render() override;

    /// See view.h for details
    void run() override;
};


#endif //CHECKERS_PTUI_H
