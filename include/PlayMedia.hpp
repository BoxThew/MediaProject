#ifndef PLAY_MEDIA_HPP
#define PLAY_MEDIA_HPP
#include "SFML/Audio/SoundSource.hpp"
#include "Song.hpp"
#include <vector>
#include <deque>
#include <stack> 
#include <memory>
#include "SFML/Audio.hpp"
#include "SFML/System.hpp"
#include "MediaWindow.hpp"



enum class PlayBack{
    PREV, TOGGLE, SKIP, FINISHED, ERROR, NONE
};

PlayBack action(const char c);

class PlayMedia{

    std::deque<Song*> queue;
    std::stack<Song*> history;
    Song *current_song; 



public:
    PlayMedia();

    void set_queue(const std::vector<std::unique_ptr<Song>>& songs);

    void set_queue(const std::vector<Song*>& songs);

    void play_songs();

    void set_history(Song *song);


    bool still_playing(const sf::Music& music) const;

    void skip_song(sf::Music& music);

    void next_song();

    void prev_song(sf::Music& music);

    void toggle_song(sf::Music& music);

    PlayBack play_current_song();





};

#endif