#include "WindowADT.hpp"
#include "SFML/Window/Event.hpp"
#include "SFML/Window/VideoMode.hpp"
#include <optional>




WindowADT::WindowADT(const std::string& window_title){
	this->window_title = window_title;

	window.create(sf::VideoMode({SCREEN_WIDTH, SCREEN_HEIGHT}), window_title);

	
}


bool WindowADT::is_open() const{
	return window.isOpen();
}

/*
determines what the user is doing, whether they close window, press a button
type something, etc
*/
void WindowADT::handle_event(const sf::Event& event){
	
	if (event.is<sf::Event::Closed>()){
		window.close();
	}
	
}


/*
main loop of the window
*/
void WindowADT::run(){
	while (window.isOpen()){

		process_events();
		render_once();
		
	}
}


void WindowADT::process_events(){
	while (const std::optional<sf::Event> event = window.pollEvent()){
			handle_event(*event);
		}
}

void WindowADT::render_once(){
	
	window.clear(sf::Color(242, 232, 207)); 
	draw();
	window.display();
}