#include "MediaWindow.hpp"

#include "Song.hpp"
#include "tag.h"
#include "fileref.h"
#include <string>

/*
int  main(){
        TagLib::FileRef f("songs/Billy Joel - Vienna.mp3");

    TagLib::Tag *tag = f.tag();

    Song s("salt");
    s.set_artist(tag->artist().to8Bit(true));
    s.set_title(tag->title().to8Bit(true));
    s.set_album(tag->album().to8Bit(true));
    s.set_year_rel(tag->year());



    MediaWindow m;

    

    m.display_song_info(&s);

    m.run();
    
}

*/