#ifndef WINDOW_ADT_HPP
#define WINDOW_ADT_HPP

#include "SFML/Graphics/RenderWindow.hpp"
#include "SFML/Window.hpp"
#include <string>

class WindowADT{
protected:
    std::string window_title;
    static constexpr unsigned int SCREEN_WIDTH = 800;
    static constexpr unsigned int SCREEN_HEIGHT = 800;
    

    sf::RenderWindow window;

    WindowADT(const std::string& window_title);


    virtual void handle_event(const sf::Event& event);

    //must override this 
    virtual void draw() = 0;

public:

    bool is_open() const;

    void run();

void process_events();
void render_once();


    //must override destructor
    virtual ~WindowADT() = default;
    
};

#endif