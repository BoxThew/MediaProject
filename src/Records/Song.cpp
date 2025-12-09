#include "Song.hpp"
#include <string>
#include <vector>


Song::Song(){
    this->file_name = "No File Name";
    this->title = "No Song Title";
    this->artist = "No Song Artist";
    this->album = "No Song Album";
    this->year_rel = -1;
    this->times_played = 0;
}

void Song::set_file_name(const std::string& file_name){
    this->file_name = file_name;
}
void Song::set_title(const std::string& title){
    this->title = title;
}
void Song::set_artist(const std::string& artist){
    this->artist = artist;
}
void Song::set_album(const std::string& album){
    this->album = album;
}
void Song::set_year_rel(const int year_rel){
    this->year_rel = year_rel;
}
void Song::add_genre(const std::string& genre){
    this->genres.push_back(genre);
}

void Song::inc_times_played(){
    ++times_played;
}

std::string Song::get_file_name() const{return file_name;}

std::string Song::get_title() const{return title;}

std::string Song::get_artist() const{return artist;}

std::string Song::get_album() const{return album;}

unsigned int Song::get_year_rel() const{return year_rel;}

std::vector<std::string> Song::get_genres() const{return genres;}

unsigned int Song::get_times_played() const{return times_played;}

