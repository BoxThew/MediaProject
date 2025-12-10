#include "MediaWindow.hpp"
#include "SFML/Graphics/Text.hpp"
#include "SFML/Graphics/Color.hpp"
#include <SFML/Graphics/RectangleShape.hpp>
#include "WindowADT.hpp"
#include <iostream>
#include "Database.hpp"



sf::Color white = sf::Color::White;
sf::Color blue = sf::Color(146, 175, 215); 
sf::Color red = sf::Color(188, 71, 73); 
sf::Color beige = sf::Color(242, 232, 207); 
sf::Color green = sf::Color(56, 102, 65);



MediaWindow::MediaWindow(): WindowADT("Media Window"), 
song_title(nullptr),
artist_text(nullptr),
prev_label(title_font, "Prev", 18),
play_label(title_font, "Play", 18),
next_label(title_font, "Next", 18)
{

	if(!title_font.openFromFile("assets/Fonts/Sono-Bold.ttf")){
		std::cout << "No Font found.\n";
	}

	song_title = new sf::Text(title_font,  " ", 24);
	artist_text = new sf::Text(title_font, " ", 18); 

	song_title->setPosition({SCREEN_WIDTH / 2, 600});
	song_title->setFillColor(red);

	artist_text->setFillColor(red); 
	artist_text->setPosition({SCREEN_WIDTH / 2, 400});

	//load all songs
	auto& allSong = Database::get_all_songs();
	for(auto& s: allSong){
		songs.push_back(s.get()); 
	}

	//Buttons
	sf::Vector2f buttonSize(100.0f, 40.0f); 
	float bottomY = 740.f;
	float labelY = bottomY + 8.0f;

	prev_button.setSize(buttonSize);
	play_button.setSize(buttonSize); 
	next_button.setSize(buttonSize);

	sf::Color buttonColor(100, 150, 200); 
	prev_button.setFillColor(buttonColor);
	play_button.setFillColor(buttonColor);
	next_button.setFillColor(buttonColor);

	prev_button.setPosition({150.0f, bottomY});
	play_button.setPosition({350.0f, bottomY});
	next_button.setPosition({550.0f, bottomY}); 

	//Labels
	prev_label.setString("Prev");
	play_label.setString("Play");
	next_label.setString("Next");
	
	prev_label.setFillColor(white);
	play_label.setFillColor(white);
	next_label.setFillColor(white);

	prev_label.setPosition({160.0f, labelY});
	play_label.setPosition({370.0f, labelY});
	next_label.setPosition({570.0f, labelY});
}

void MediaWindow::handle_event(const sf::Event& event){

	WindowADT::handle_event(event);

	//Event: mouse clicks
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
	//Draw: scrollable list
	float x = 50.0f;
	float y = 50.0f; 
	float lineHeight = 24.0f; 
	
	sf::Text lineText(title_font,"", 18);

	int visibleSongs = 10;
	int start = first_visible_index;
	int end = std::min(start + visibleSongs, static_cast<int>(songs.size()));

	for(int i = 0; i < end; i++){

		Song* s = songs[i];
		
		if(!s){
			continue;
		}
		lineText.setString(s->get_title());
		lineText.setPosition({x,y});

		if(i == selected_index){
			lineText.setFillColor(red); 
		}
		else{
			lineText.setFillColor(blue); 
		}
		window.draw(lineText);
		y += lineHeight; 
	}

	window.draw(prev_button);
	window.draw(play_button);
	window.draw(next_button);

	window.draw(prev_label);
	window.draw(play_label);
	window.draw(next_label); 
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