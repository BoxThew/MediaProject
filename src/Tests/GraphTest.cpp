#include "SongGraph.hpp"
#include "Database.hpp"
#include "Song.hpp"
#include "tag.h"
#include "fileref.h"
#include <iostream>
#include <filesystem>

using itr = std::filesystem::directory_iterator;

/*
int main() {
    // Load songs into Database
    std::string path = "songs";
    for (const auto& entry : itr(path)){
        std::string file_path = entry.path();
        TagLib::FileRef f(file_path.c_str());
        if (f.isNull() || !f.tag()){
            continue;
        }
        TagLib::Tag *tag = f.tag();
        Song s;
        s.set_file_name(file_path);
        s.set_artist(tag->artist().to8Bit(true));
        s.set_title(tag->title().to8Bit(true));
        s.set_album(tag->album().to8Bit(true));
        s.set_year_rel(tag->year());
        
        Database::add_song(s);
    }

    SongGraph graph;
    graph.graph_by_artist();

    // pass graph to your UI / TUI if you want, or just test:
    auto& allSongs = Database::get_all_songs();
    if (!allSongs.empty()) {
        Song* first = allSongs[0].get();
        auto neighbors = graph.get_similar_songs(first);

        std::cout << "Songs with the same artist as "
                  << first->get_title() << ":\n";
        for (Song* s : neighbors) {
            std::cout << "  - " << s->get_title()
                      << " by " << s->get_artist() << "\n";
        }
    }
    
    return 0;
}

*/