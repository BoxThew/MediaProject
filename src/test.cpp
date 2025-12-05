#include <iostream>
#include <fileref.h>
#include <tag.h>
#include "Song.hpp"

/*


int main(){
    std::string path = "songs/";
    TagLib::FileRef f("songs/Billy Joel - Vienna.mp3");

    if (f.isNull() || !f.tag()){
        std::cout << "Error when trying to read song.\n";
        return 1;
    }

    TagLib::Tag *tag = f.tag();

    Song s;
    s.set_artist(tag->title().to8Bit(true));
    s.set_title(tag->artist().to8Bit(true));
    s.set_album(tag->album().to8Bit(true));
    s.set_year_rel(tag->year());
    

    std::cout << "Title: " << s.get_title() << "\n";
    std::cout << "Artist: " << s.get_artist() << "\n";
    std::cout << "Album: " << s.get_album() << "\n";
    std::cout << "Year: " << s.get_year_rel() << "\n";

    return 0;
}

*/