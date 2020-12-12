#define OLC_PGE_APPLICATION
#include "view_controller/GUI.h"

int main(int argc, char** argv){
    GUI demo;
    if (demo.Construct(256, 240, 1, 1))
        demo.Start();
    return 0;
}