#include "../includes/Window.hpp"


int Window::get_window_width(){
    return this->screenWidth;
}
int Window::get_window_height(){
    return this->screenHeight;
}

std::string Window::get_title() {
    return this->title;
}

Window::Window(int width, int height, std::string title)
    : screenWidth(width), screenHeight(height), title(title) {
    InitWindow(get_window_width(), get_window_height(), get_title().c_str());
}


bool Window::window_should_close(){
    return WindowShouldClose();
}
void Window::draw_handler(){
    BeginDrawing();
    // TODO DRAWINGS
    ClearBackground(RAYWHITE);
    DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
    EndDrawing();
}

void Window::clean_window_resources(){
    // CLEAN ALL RESOURCES HERE 
    CloseWindow();
}