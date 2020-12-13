/// view_controller/View.h
///
/// Base class for view components
///
/// @author Brendan Grau
/// License: GNU GPLv3
///////////////////////////////////////////////////////////////////////////////

#ifndef CHECKERS_VIEW_H
#define CHECKERS_VIEW_H
#include "../game/GameManager.h"


class View
{
protected:
    GameManager gameManager;



public:
    View();

    /// Setup function for views
    virtual void setup() = 0;

    /// Function to let the view know model to redraw scene
    virtual void render() = 0;

    /// Start the view
    virtual void run() = 0;
};


#endif //CHECKERS_VIEW_H
