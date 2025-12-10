#ifndef MEDIA_WINDOW_HPP
#define MEDIA_WINDOW_HPP


#include "WindowADT.hpp"
#include "SFML/Graphics/Font.hpp"
# include "SFML/Graphics/Text.hpp"
#include "Song.hpp"

class MediaWindow : public WindowADT{
	sf::Font title_font;
	sf::Text *song_title;
	sf::Text *artist_text;



	void display_song_title(const Song* song);

	void display_song_artist(const Song* song);

	void display_song_album(const Song* song);

	void center_text(sf::Text* text);


protected:
	virtual void draw() override;

public:
	MediaWindow();

	void display_song_info(const Song* song);

	~MediaWindow() override;
};

#endif