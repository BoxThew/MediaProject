#include <iostream>
#include <fileref.h>
#include <tag.h>
#include "Song.hpp"
#include "Database.hpp"

/* 
int main(){
    std::string path = "songs/";
    TagLib::FileRef f("songs/Billy Joel - Vienna.mp3");


    TagLib::Tag *tag = f.tag();

    Song s;
    s.set_artist(tag->artist().to8Bit(true));
    s.set_title(tag->title().to8Bit(true));
    s.set_album(tag->album().to8Bit(true));
    s.set_year_rel(tag->year());

    Database::add_song(s);
    TagLib::FileRef f2("songs/TWICE - PEACH GELATO.mp3");


    TagLib::Tag *tag2 = f2.tag();

    Song s2;
    s2.set_artist(tag2->artist().to8Bit(true));
    s2.set_title(tag2->title().to8Bit(true));
    s2.set_album(tag2->album().to8Bit(true));
    s2.set_year_rel(tag2->year());

    Database::add_song(s2);
    
    //pS should stay alive after reallocation
    Song *pS = Database::get_songs()[0].get();
    std::cout << "Title: " << s.get_title() << "\n";
    std::cout << "Artist: " << s.get_artist() << "\n";
    std::cout << "Album: " << s.get_album() << "\n";
    std::cout << "Year: " << s.get_year_rel() << "\n";

    Database::add_song(s2);

    std::cout << "Song one title is still " << pS->get_title() << '\n';
    std::cout << "Second song is " << s2.get_title() << '\n';


    //Test: remove_song 
    Database::remove_song(s2);
    std::cout<<"After removal:\n";
    for(auto& up: Database::get_all_songs()){
        std::cout<< up->get_title() <<< "by" << up->get_artists() <<"\n"; 
    }

    return 0;
}
*/
