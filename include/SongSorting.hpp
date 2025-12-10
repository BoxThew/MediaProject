#ifndef SONG_SORTING_HPP
#define SONG_SORTING_HPP
#include "Song.hpp"

namespace SongComp{

    typedef bool (*Comparator)(const Song*, const Song *);

    bool by_artist(const Song *s1, const Song *s2);
    bool by_title(const Song *s1, const Song *s2);
    bool by_album(const Song *s1, const Song *s2);

    bool by_times_listened(const Song *s1, const Song *s2);

}

#endif