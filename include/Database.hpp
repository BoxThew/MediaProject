#ifndef DATABASE_HPP
#define DATABASE_HPP

#include <vector>
#include "Song.hpp"

class Database{
    static std::vector<Song*> songs;

public:
    Database();

    static void add_song(Song* song);


    static std::vector<Song*> get_songs();

};


#endif