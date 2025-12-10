#include "PlayMedia.hpp"

#include <memory>
#include <vector>
#include <queue>
#include <stack> 
#include "SFML/Audio/SoundSource.hpp"

#include <ctime>
#include <iostream>
#include <chrono>

PlayBack action(const char c){
    switch(c){
        default:
            return PlayBack::NONE;
        case '>':
            return PlayBack::SKIP;
        case '<':
            return PlayBack::PREV;
        case '=':
            return PlayBack::TOGGLE;
    }

}

PlayMedia::PlayMedia(){
    this->current_song = nullptr;
}


//for entire song library
void PlayMedia::set_queue(const std::vector<std::unique_ptr<Song>>& songs){
    for (const auto& song : songs){
        queue.push_back(song.get());
    }
}

//for albums and songs by artists
void PlayMedia::set_queue(const std::vector<Song*>& songs){
    for (const auto& song : songs){
        queue.push_back(song);
    }
}

void PlayMedia::play_songs(){
    while (!queue.empty()){

        current_song = queue.front();

        PlayBack result = play_current_song();

        switch(result){
            default:
                next_song();
                break;

            case PlayBack::SKIP:
            case PlayBack::PREV:
                continue;
                break;
        }
    }

    std::cout << "Play queue is empty.\n";
}

PlayBack PlayMedia::play_current_song(){
    sf::Music music;
    std::string artist = current_song->get_artist();
    std::string title = current_song->get_title();

    if (!music.openFromFile(current_song->get_file_name())){
        std::cout << "Error trying to read " << title << " by " << artist <<
                        ".\n";
        
        return PlayBack::ERROR;
    }

    const std::chrono::seconds min_time_listened {30};
    bool song_min_listened = false;
    
    auto start = std::chrono::high_resolution_clock::now();

    std::cout << "Now playing " << title << " by " << artist << "!\n";
    music.play();

    current_song->inc_times_played();
                song_min_listened = true;
                std::cout << "Incremented to " << 
                current_song->get_times_played() << "!\n";
    while (still_playing(music)){

        
        


        

        char peeked = std::cin.peek();
        std::cin.get();
        PlayBack choice = action(peeked);
        
        switch(choice){
            default:
                break;

            case PlayBack::SKIP:
                skip_song(music);
                return PlayBack::SKIP;

            case PlayBack::PREV:
                prev_song(music);
                return PlayBack::PREV;

            case PlayBack::TOGGLE:
                toggle_song(music);

        }
        
        sf::sleep(sf::milliseconds(60));
    }

    return PlayBack::FINISHED;
}

void PlayMedia::set_history(Song* song){
    if(song){
        history.push(song); 
    }
    else{
        std::cout << "Invalid(nullptr)"; 
    }
}

bool PlayMedia::still_playing(const sf::Music& music) const{
    return music.getStatus() != sf::SoundSource::Status::Stopped;
}

void PlayMedia::next_song(){
    set_history(current_song);
    queue.pop_front();
}

void PlayMedia::skip_song(sf::Music& music){
    music.stop();
    set_history(current_song);
    std::cout << "Skipping song.\n";
    queue.pop_front();

}

void PlayMedia::prev_song(sf::Music& music){
    if(history.empty()){ 
        std::cout << "History is empty.\n"; 
        return; 
    }
    else{

        Song *prev_song = history.top(); 
        history.pop(); 

        queue.push_front(prev_song);
        
    }
}

void PlayMedia::toggle_song(sf::Music& music){
    if (music.getStatus() == sf::SoundSource::Status::Paused)
        music.play();
    
    else
        music.pause();
}