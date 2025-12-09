#ifndef WINDOW_ADT_HPP
#define WINDOW_ADT_HPP

#include "SFML/Graphics/RenderWindow.hpp"
#include "SFML/Window.hpp"
#include <string>

class WindowADT{
    std::string window_title;
    static constexpr unsigned int SCREEN_WIDTH = 800;
    static constexpr unsigned int SCREEN_HEIGHT = 800;
    sf::RenderWindow window;

    void make_window();

    void update_window();


public:
    WindowADT();

public:




    
};

#endif