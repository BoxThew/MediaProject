
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




int main(){
    
    std::string path = "songs";
    for (const auto& entry : itr(path)){
        Song s("tets salt");
        std::string file_path = entry.path();
        TagLib::FileRef f(file_path.c_str());
        if (f.isNull() || !f.tag()){
            std::cout << "Error when trying to read song.\n";
            return 1;
        }
        TagLib::Tag *tag = f.tag();
        s.set_file_name(file_path);
        s.set_artist(tag->artist().to8Bit(true));
        s.set_title(tag->title().to8Bit(true));
        s.set_album(tag->album().to8Bit(true));
        s.set_year_rel(tag->year());

        Database::add_song(s);

    }

    
    PlayMedia p;

    p.set_queue(Database::get_all_songs());

    p.play_songs();
    
    
    return 0;
}


