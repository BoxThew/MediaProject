#ifndef SONG_GRAPH_HPP
#define SONG_GRAPH_HPP

#include <unordered_map>
#include <vector>

class Song; 

class SongGraph{
    std::unordered_map<Song*, std::vector<Song*>> adj;

    void add_edge(Song* a, Song* b); 

    public:
    SongGraph() = default; 

    //connect songs share by artist
    void graph_by_artist();
    std::vector<Song*> get_similar_songs(Song* song) const;
}; 

#endif




