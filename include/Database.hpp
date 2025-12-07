#ifndef DATABASE_HPP
#define DATABASE_HPP

#include <vector>
#include <memory>
#include "Song.hpp"
#include <map>
#include <unordered_map>
#include <string> 


struct ArtistAlbumKey{
    std::string artist;
    std::string album; 

    //check objects
    bool operation==(const ArtistAlbumKey& other) const{
        return artist == other.artists && album other.album; 
    }

};

struct ArtistAlbumKeyHash{
    //TODO: define a hash function
}// 


class Database{

    static std::vector<std::unique_ptr<Song>> songs;
    static std::map<std::string, std::vector<Song*>> songs_by_artists;
    static std::map<std::string, std::vector<Song*>> songs_in_album;
    static std::unordered_map<ArtistAlbumKey, std::vector<Song*> ArtistAlbumKeyHash>songs_by_artists_album; 

    static bool artist_exists(const std::string& artist);
    static bool album_exists(const std::string& album);
public:
    

    Database();

    static void add_song(const Song& song);

    static void remove_song(const Song& song);
    static std::vector<std::unique_ptr<Song>>& get_songs();

};


#endif