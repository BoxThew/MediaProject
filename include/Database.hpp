#ifndef DATABASE_HPP
#define DATABASE_HPP

#include <vector>
#include <memory>
#include "Song.hpp"
#include <unordered_map>
#include <string> 
#include <utility>
#include <functional>


//removed structs

class Database{
    const std::string song_pepper;
    static std::vector<std::unique_ptr<Song>> songs;
    //this one is a hash table
    static std::unordered_map<std::string, std::vector<Song*>> songs_by_artists;

    /*
    using strings for this because std::pair would not hash properly.
    my idea for this is to have the string be the artist + album + salt + pepper
    but feel free to change / implement it however you want!
    please look at make_salt funct if you are interested in this idea!
    */

    static std::unordered_map<std::string, std::vector<Song*>> songs_in_album;


    /*
    my idea for this is to make it generate a random string that can contain
    any of the printable ascii characters, length could be up to you.
    feel free to mess with function header if you want to implement differently

    btw, Song now has a "salt" member,
    */
    static std::string make_salt(const Song& song);

    static bool artist_exists(const std::string& artist);
    static void make_artist(const std::string& artist);
    static void add_to_artist(const std::string& artist, Song *pSong);

    static bool album_exists(const std::string& album);
    static void make_album(const std::string& album);
    static void add_to_album(const std::string& album, Song *pSong);

public:
    

    Database();

    static void add_song(const Song& song);

    static void remove_song(const Song& song);
    static std::vector<std::unique_ptr<Song>>& get_all_songs();

};

#endif