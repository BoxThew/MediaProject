#include "SongSorting.hpp"
#include "Song.hpp"

bool SongComp::by_album(const Song *s1, const Song *s2){
    return s1->get_album() < s2->get_album();
}
bool SongComp::by_artist(const Song *s1, const Song *s2){
    return s1->get_artist() < s2->get_artist();
}
bool SongComp::by_title(const Song *s1, const Song *s2){
    return s1->get_title() < s2->get_title();
}

bool SongComp::by_times_listened(const Song *s1, const Song *s2){
    return s1->get_times_played() < s2->get_times_played();
}