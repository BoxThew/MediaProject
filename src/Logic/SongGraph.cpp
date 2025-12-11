#include "SongGraph.hpp"
#include "Song.hpp"
#include "Database.hpp"

#include <unordered_map>
#include <string>

void SongGraph::add_edge(Song* a, Song* b){

    bool found = false;

    if(!a || !b || a == b){
        return;
    }

    auto& listA = adj[a];
    auto& listB = adj[b];

    //b to a: compare and check if item exists
    for(Song* s: listA){
        if(s == b){
            found  = true;
            break; 
        }
    }

    //add if not found
    if(!found){
        listA.push_back(b); 
    }

    //a to b
    found = false;
    for(Song* s: listB){
        if(s == a){
            found = true; 
            break; 
        }
    }
    if(!found){
        listB.push_back(a); 
    }
}

void SongGraph::graph_by_artist(){
    adj.clear();

    auto& allSongs = Database::get_all_songs();
    std::unordered_map<std::string, std::vector<Song*>> byArtist;

    for(auto& i: allSongs){
        Song* s = i.get();
        if(!s){
            continue;
        }

        adj[s];

        std::string artist = s->get_artist();
        byArtist[artist].push_back(s); 
    }
    
    //connect songs for each artist
    for(auto& pair: byArtist){
        std::vector<Song*>& group = pair.second;
        
        for(std::size_t i = 0; i < group.size(); i++){
            for(std::size_t j = i + 1; j < group.size(); j++){
                add_edge(group[i], group[j]); 
            }
        }
    } 
}

std::vector<Song*> SongGraph::get_similar_songs(Song* song) const{
    std::vector<Song*> result;

    if(!song){
        return result;
    }

    auto it = adj.find(song);

    if(it == adj.end()){
        return result;
    }

    const std::vector<Song*>& nextTo = it->second;
    result = nextTo;
    return result; 
}



