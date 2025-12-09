#include "WindowADT.hpp"
#include "SFML/Graphics/Color.hpp"
#include "SFML/Window/Event.hpp"
#include "SFML/Window/VideoMode.hpp"


void WindowADT::make_window(){
	window.create(sf::VideoMode({SCREEN_WIDTH, SCREEN_HEIGHT}), "Test Window");
	window.clear(sf::Color::Green);
	window.display();
}

void WindowADT::update_window(){
	while (window.isOpen()){

		while (const std::optional event = window.pollEvent()){
			if (event->is<sf::Event::Closed>()){
				window.close();
			}
		}
	}
}




WindowADT::WindowADT(){
	make_window();
	update_window();
}