
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
    
    Database::load_songs();

    
    PlayMedia p;

    p.set_queue(Database::get_all_songs());

    p.play_songs();

    Database::save_songs();
    
    
    return 0;
}


