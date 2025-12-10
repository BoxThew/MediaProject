#include "MediaWindow.hpp"
#include "SFML/Graphics/Text.hpp"
#include "SFML/Graphics/Color.hpp"
#include "WindowADT.hpp"
#include <iostream>
#include "Database.hpp"



MediaWindow::MediaWindow() : WindowADT("Media Window"){

	if(!title_font.openFromFile("assets/Fonts/Sono-Bold.ttf")){
		std::cout << "No Font found.\n";
	}


	song_title = new sf::Text(title_font,  " ", 24);
	artist_text = new sf::Text(title_font, " ", 18); 

	song_title->setPosition({SCREEN_WIDTH / 2, 600});
	song_title->setFillColor(sf::Color::Red);

	artist_text->setFillColor(sf::Color::Red); 
	artist_text->setPosition({SCREEN_WIDTH / 2, 400});

	//load all songs
	auto& allSong = Database::get_all_songs();
	for(auto& s: allSong){
		songs.push_back(s.get()); 
	}
}

void MediaWindow::handle_event(const sf::Event& event){

	WindowADT::handle_event(event);


	if (auto* mouse = event.getIf<sf::Event::MouseButtonPressed>()){ 

		if(mouse->button == sf::Mouse::Button::Left){ 

		int mouseY = mouse->position.y;
		int lineHeight = 24;
		int listStartY = 50;

		if(mouseY >= listStartY){ 
			int index = (mouseY - listStartY) / lineHeight;

			if(index >= 0 && index < static_cast<int>(songs.size())){
				selected_index = index;
				Song* s = songs[index];
				display_song_info(s);  
				}
			}
		}
	}
}

	
void MediaWindow::display_song_title(const Song* song){
	if(!song || !song_title){
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
	display_song_title(song);
	display_song_artist(song); 

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

	float x = 50.0f;
	float y = 50.0f; 
	float lineHeight = 24.0f; 
	sf::Text lineText(title_font,"", 18);

	for(std::size_t i = 0; i< songs.size(); i++){
		Song* s = songs[i];
		if(!s){
			continue;
		}
		lineText.setString(s->get_title());
		lineText.setPosition({x,y});

		if(static_cast<int>(i) == selected_index){
			lineText.setFillColor(sf::Color::Red); 
		}
		else{
			lineText.setFillColor(sf::Color::Blue); 
		}
		window.draw(lineText);
		y += lineHeight; 
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