#include "MediaWindow.hpp"
#include "SFML/Graphics/Text.hpp"
#include "SFML/Graphics/Color.hpp"
#include "WindowADT.hpp"
#include <iostream>


MediaWindow::MediaWindow() : WindowADT("Media Window"){

	if(!title_font.openFromFile("assets/Fonts/Sono-Bold.ttf")){
		std::cout << "No Font found.\n";
	}
	song_title = new sf::Text(title_font,  " ", 24);
	artist_text = new sf::Text(title_font, " ", 18); 

	song_title->setPosition({SCREEN_WIDTH / 2, 600});
	song_title->setFillColor(sf::Color::Red);

	
	artist_text->setPosition({SCREEN_WIDTH / 2, 400});

}

	
void MediaWindow::display_song_title(const Song* song){
	if(!song || !song_title ){
		return; 
	}
	song_title->setString(song->get_title());
	center_text(song_title);
}

void MediaWindow::display_song_artist(const Song* song){
	if(!song || !artist_text){
		return; 
	}
	artist_text->setString(song->get_artist());
}

void MediaWindow::display_song_album(const Song* song){

}


void MediaWindow::center_text(sf::Text* text){
	sf::FloatRect bounds = text->getLocalBounds();
	text->setOrigin(bounds.getCenter());
}


void MediaWindow::draw(){
	//draw title
	if (song_title){
		window.draw(*song_title);
	}

	//draw artist
	if (artist_text){
		window.draw(*artist_text);
	}
}


void MediaWindow::display_song_info(const Song* song){
	display_song_title(song);
	display_song_artist(song);
	display_song_album(song);
}


MediaWindow::~MediaWindow(){
	delete song_title;
	delete artist_text; 
}