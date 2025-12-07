
#include "Database.hpp"
#include "Song.hpp"
#include <vector>
#include <memory>
#include <unordered_map>
#include <map>
#include <string>

std::vector<std::unique_ptr<Song>> Database::songs{};
std::map<std::string, std::vector<Song*>> Database::songs_by_artists{};
std::map<std:: string, std::vector<Song*>> Database::songs_in_album{};
std::unordered_map<ArtistAlbumKey, std::vector<Song*>, ArtistAlbumKeyHash> Database::songs_by_artists_album; 



bool Database::artist_exists(const std::string& artist){
    return songs_by_artists.find(artist) != songs_by_artists.end();
}


bool Database::album_exists(const std::string& album){
    return songs_in_album.find(album) != songs_in_album.end(); 
}

bool Database::songs_by_artists_album_exists(const std::string& artist, const std::string& album){
    ArtistAlbumKey key(artist, album); 
    return songs_by_artists_album.find(key) != songs_by_artists_album.end(); 
}


Database::Database(){

}

void Database::add_song(const Song& song){
    std::unique_ptr<Song> pSong = std::make_unique<Song>(song);
    std::string song_artist = song.get_artist();
    Song *pS = pSong.get();
    if (artist_exists(song_artist)){
        songs_by_artists.at(song_artist).push_back(pS);
    }
    else{
        std::vector<Song*> artist_songs {};
        artist_songs.push_back(pS);
        songs_by_artists[song_artist] = artist_songs;
    }
    songs.push_back(std::move(pSong));
}



void Database::remove_song(const Song& song){
//TODO
    
}



std::vector<std::unique_ptr<Song>>& Database::get_songs(){return songs;}