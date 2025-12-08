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



enum class Choice{
    SKIP, PREV, NONE
};

Choice action(const char c);

class PlayMedia{

    std::deque<Song*> queue;
    std::stack<Song*> history;
    Song* current_song; 



public:
    PlayMedia();

    void set_queue(const std::vector<std::unique_ptr<Song>>& songs);

    void play_songs();

    void set_history(Song *song);

    void play_back(); 

    bool still_playing(const sf::Music& music) const;

    bool skip_song(const char user_in) const;

    bool prev_song(const char user_in) const;


};

#endif