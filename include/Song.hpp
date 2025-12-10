#ifndef SONG_HPP
#define SONG_HPP
#include <string>
#include <vector>
#include <ostream>
#include <istream>

class Song{


    std::string file_name;
    std::string title;
    std::string artist;
    std::string album;
    unsigned int year_rel;
    std::vector<std::string> genres;

    unsigned int times_played;
    

public:
    Song();

    void set_file_name(const std::string& file_name);
    void set_title(const std::string& title);
    void set_artist(const std::string& artist);
    void set_album(const std::string& album);
    void set_year_rel(const int year_rel);
    void add_genre(const std::string& genre);



    void inc_times_played();

    std::string get_file_name() const;
    std::string get_title() const;
    std::string get_artist() const;
    std::string get_album() const;
    unsigned int get_year_rel() const;
    std::vector<std::string> get_genres() const;
    unsigned int get_times_played() const;


    void save(std::ofstream& file);

    static Song load(std::ifstream& file);

};


#endif