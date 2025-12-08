#include "PlayMedia.hpp"

#include <memory>
#include <vector>
#include <queue>
#include <stack> 
#include "SFML/Audio/SoundSource.hpp"

#include <ctime>
#include <iostream> 

Choice action(const char c){
    switch(c){
        default:
            return Choice::NONE;
        case '>':
            return Choice::SKIP;
        case '<':
            return Choice::PREV;
    }

}

PlayMedia::PlayMedia(){
    this->current_song = nullptr;
}

void PlayMedia::set_queue(const std::vector<std::unique_ptr<Song>>& songs){
    for (const auto& song : songs){
        queue.push_back(song.get());
    }
}

//removed shuffle for now just to focus on main implementation first

void PlayMedia::play_songs(){
    
    play:
    while(!queue.empty()){
        current_song = queue.front();
        sf::Music m;

        if (!m.openFromFile(current_song->get_file_name())){
            std::cout << "Error: Could not open " <<
            current_song->get_file_name() << ".\n";
            queue.pop_front();
            continue;
        }

        std::cout << "Now playing " << current_song->get_title() <<
                    " by " << current_song->get_artist() << "!\n\n";
        m.play();
        bool playing = true;
        while (playing){
            if (!still_playing(m)){
                break;
            }
            char peeked_in = std::cin.peek();
            std::cin.get();

            switch(action(peeked_in)){
                default:
                    break;
                case Choice::SKIP:
                    playing = false;
                    m.stop();
                    std::cout << "Skipping song.\n";
                    break;
                case Choice::PREV:
                    playing = false;
                    m.stop();
                    std::cout << "Going back a song.\n";
                    play_back();
                    goto play;
                    break;
            }



            sf::sleep(sf::milliseconds(60));
        
        }
        //After song played
        if(current_song){
        set_history(current_song); 
        }
        queue.pop_front();

    }
    
    std::cout << "Play queue is empty.\n";

}


void PlayMedia::set_history(Song* song){
    if(song){
        history.push(song); 
    }
    else{
        std::cout << "Invalid(nullptr)"; 
    }
}

void PlayMedia::play_back(){
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

bool PlayMedia::still_playing(const sf::Music& music) const{
    return music.getStatus() != sf::SoundSource::Status::Stopped;
}

bool PlayMedia::skip_song(const char user_in) const{

    std::cin.get();
    std::cin.ignore(100, '\n');
    return user_in == '>';
}

bool PlayMedia::prev_song(const char user_in) const{

    std::cin.get();
    std::cin.ignore(100, '\n');
    return user_in == '<';
}