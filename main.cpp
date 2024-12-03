#include <iostream>
#include "includes/Window.hpp"
#include <string>

using namespace std;


int main(void)
{
    Window myWindow(800, 450, "My first window");

    SetTargetFPS(60);              
    while (!myWindow.window_should_close())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        myWindow.draw_handler();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    myWindow.clean_window_resources();      // Close window and OpenGL context
    //--------------------------------------------------------------------------------------
    return 0;
}
  