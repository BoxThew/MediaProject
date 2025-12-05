#ifndef DATABASE_HPP
#define DATABASE_HPP

#include <vector>
#include "Song.hpp"

class Database{
public:
    static std::vector<Song> songs;


    Database();

    static void add_song(const Song& song);


    static std::vector<Song>& get_songs();

};


#endif