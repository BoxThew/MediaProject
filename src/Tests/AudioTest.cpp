
#include "Song.hpp"
#include "SFML/Audio.hpp"
#include "SFML/System.hpp"
#include "Database.hpp"
#include "tag.h"
#include "fileref.h"
#include <iostream>
#include <format>
#include <string>
#include "PlayMedia.hpp"

using itr = std::filesystem::directory_iterator;


/*
int main(){
    
    Database::load_songs();

    
    PlayMedia p;

    p.set_queue(Database::get_all_songs());

    p.play_songs();

    Database::save_songs();

    std::vector<Song*> top_songs = Database::get_top_songs();
    for (const auto& song : top_songs){
        std::cout << "You listened to " <<song->get_title() << 
        ' ' << song->get_times_played() << " times!\n";
    }
    
    
    return 0;
}
*/




