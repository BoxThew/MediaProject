#include <iostream>
#include <fileref.h>
#include <tag.h>


int main(){
    TagLib::FileRef f("songs/Billy Joel - Vienna.mp3");

    if (f.isNull() || !f.tag()){
        std::cout << "Error when trying to read song.\n";
        return 1;
    }

    TagLib::Tag *tag = f.tag();

    std::cout << "Title: " << tag->title().to8Bit(true) << "\n";
    std::cout << "Artist: " << tag->artist().to8Bit(true) << "\n";
    std::cout << "Album: " << tag->album().to8Bit(true) << "\n";
    std::cout << "Year: " << tag->year() << "\n";

    return 0;
}