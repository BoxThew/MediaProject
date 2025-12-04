# Install script for directory: /home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/pleiades/Programming/Projects/mp3ME/build/external/taglib-2.1.1/taglib/libtag.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/taglib" TYPE FILE FILES
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/tag.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/fileref.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/audioproperties.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/taglib_export.h"
    "/home/pleiades/Programming/Projects/mp3ME/build/external/taglib-2.1.1/taglib/../taglib_config.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/toolkit/taglib.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/toolkit/tstring.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/toolkit/tlist.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/toolkit/tlist.tcc"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/toolkit/tstringlist.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/toolkit/tbytevector.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/toolkit/tbytevectorlist.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/toolkit/tvariant.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/toolkit/tbytevectorstream.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/toolkit/tiostream.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/toolkit/tfile.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/toolkit/tfilestream.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/toolkit/tmap.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/toolkit/tmap.tcc"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/toolkit/tpicturetype.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/toolkit/tpropertymap.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/toolkit/tdebuglistener.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/toolkit/tversionnumber.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mpeg/mpegfile.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mpeg/mpegproperties.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mpeg/mpegheader.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mpeg/xingheader.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mpeg/id3v1/id3v1tag.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mpeg/id3v1/id3v1genres.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mpeg/id3v2/id3v2.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mpeg/id3v2/id3v2extendedheader.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mpeg/id3v2/id3v2frame.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mpeg/id3v2/id3v2header.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mpeg/id3v2/id3v2synchdata.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mpeg/id3v2/id3v2footer.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mpeg/id3v2/id3v2framefactory.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mpeg/id3v2/id3v2tag.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mpeg/id3v2/frames/attachedpictureframe.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mpeg/id3v2/frames/commentsframe.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mpeg/id3v2/frames/eventtimingcodesframe.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mpeg/id3v2/frames/generalencapsulatedobjectframe.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mpeg/id3v2/frames/ownershipframe.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mpeg/id3v2/frames/popularimeterframe.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mpeg/id3v2/frames/privateframe.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mpeg/id3v2/frames/relativevolumeframe.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mpeg/id3v2/frames/synchronizedlyricsframe.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mpeg/id3v2/frames/textidentificationframe.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mpeg/id3v2/frames/uniquefileidentifierframe.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mpeg/id3v2/frames/unknownframe.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mpeg/id3v2/frames/unsynchronizedlyricsframe.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mpeg/id3v2/frames/urllinkframe.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mpeg/id3v2/frames/chapterframe.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mpeg/id3v2/frames/tableofcontentsframe.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mpeg/id3v2/frames/podcastframe.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/ogg/oggfile.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/ogg/oggpage.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/ogg/oggpageheader.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/ogg/xiphcomment.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/ogg/vorbis/vorbisfile.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/ogg/vorbis/vorbisproperties.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/ogg/flac/oggflacfile.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/ogg/speex/speexfile.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/ogg/speex/speexproperties.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/ogg/opus/opusfile.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/ogg/opus/opusproperties.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/flac/flacfile.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/flac/flacpicture.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/flac/flacproperties.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/flac/flacmetadatablock.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/ape/apefile.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/ape/apeproperties.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/ape/apetag.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/ape/apefooter.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/ape/apeitem.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mpc/mpcfile.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mpc/mpcproperties.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/wavpack/wavpackfile.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/wavpack/wavpackproperties.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/trueaudio/trueaudiofile.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/trueaudio/trueaudioproperties.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/riff/rifffile.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/riff/aiff/aifffile.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/riff/aiff/aiffproperties.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/riff/wav/wavfile.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/riff/wav/wavproperties.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/riff/wav/infotag.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/asf/asffile.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/asf/asfproperties.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/asf/asftag.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/asf/asfattribute.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/asf/asfpicture.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mp4/mp4file.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mp4/mp4atom.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mp4/mp4tag.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mp4/mp4item.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mp4/mp4properties.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mp4/mp4coverart.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mp4/mp4itemfactory.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mod/modfilebase.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mod/modfile.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mod/modtag.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/mod/modproperties.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/it/itfile.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/it/itproperties.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/s3m/s3mfile.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/s3m/s3mproperties.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/xm/xmfile.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/xm/xmproperties.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/dsf/dsffile.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/dsf/dsfproperties.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/dsdiff/dsdifffile.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/dsdiff/dsdiffproperties.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/dsdiff/dsdiffdiintag.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/shorten/shortenfile.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/shorten/shortenproperties.h"
    "/home/pleiades/Programming/Projects/mp3ME/external/taglib-2.1.1/taglib/shorten/shortentag.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/taglib/taglib-targets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/taglib/taglib-targets.cmake"
         "/home/pleiades/Programming/Projects/mp3ME/build/external/taglib-2.1.1/taglib/CMakeFiles/Export/398eef5e047a0959864f2888198961bf/taglib-targets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/taglib/taglib-targets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/taglib/taglib-targets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/taglib" TYPE FILE FILES "/home/pleiades/Programming/Projects/mp3ME/build/external/taglib-2.1.1/taglib/CMakeFiles/Export/398eef5e047a0959864f2888198961bf/taglib-targets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/taglib" TYPE FILE FILES "/home/pleiades/Programming/Projects/mp3ME/build/external/taglib-2.1.1/taglib/CMakeFiles/Export/398eef5e047a0959864f2888198961bf/taglib-targets-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/taglib" TYPE FILE FILES
    "/home/pleiades/Programming/Projects/mp3ME/build/external/taglib-2.1.1/taglib-config.cmake"
    "/home/pleiades/Programming/Projects/mp3ME/build/external/taglib-2.1.1/taglib-config-version.cmake"
    )
endif()

