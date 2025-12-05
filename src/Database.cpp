
#include "Database.hpp"
#include "Song.hpp"
#include <vector>

std::vector<Song> Database::songs{};


Database::Database(){

}


void Database::add_song(const Song& song){
    songs.push_back(song);
}



std::vector<Song>& Database::get_songs(){return songs;}