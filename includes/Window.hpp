#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <string> // Include what you use
#include "raylib.h"

class Window {
private:
    int screenWidth;
    int screenHeight;
    std::string title; // Use std::string explicitly

public:
    Window(int width, int height, std::string title);
    int get_window_width();
    int get_window_height();
    std::string get_title();
    bool window_should_close();
    void draw_handler();
    void clean_window_resources();
};

#endif
