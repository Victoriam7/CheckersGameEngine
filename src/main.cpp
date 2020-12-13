#define OLC_PGE_APPLICATION

#include <iostream>
#include <memory>

#include "view_controller/View.h"
#include "view_controller/GUI.h"
#include "view_controller/PTUI.h"

int main(int argc, char** argv)
{
    std::unique_ptr<View> view;

    if(argc > 2)
    {
        std::cerr << "usage: cge <view_type>\n";
        return -1;
    }

    else if(argc == 1 || strcmp(argv[1], "GUI") == 0)
    {
        view.reset(new GUI());
    }

    else if(strcmp(argv[1], "PTUI") == 0)
    {
       view.reset(new PTUI());
    }

    else
    {
        std::cerr << argv[1] << ": View types can either be \"GUI\" or \"PTUI\"\n";
        std::cerr << "usage: cge <view_type>\n";
    }

    if(view != nullptr)
    {
        view->setup();
        view->run();
    }



    return 0;
}