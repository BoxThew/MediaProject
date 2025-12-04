
cmake_minimum_required(VERSION 3.16)
project(mp3ME)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(external/taglib-2.1.1)

file(GLOB_RECURSE PROJECT_SOURCES CONFIGURE_DEPENDS src/*.cpp)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/songs DESTINATION ${CMAKE_CURRENT_BINARY_DIR})



add_executable(MP3ME ${PROJECT_SOURCES})

target_include_directories(MP3ME PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/external/taglib-2.1.1/taglib
    ${CMAKE_CURRENT_SOURCE_DIR}/external/taglib-2.1.1/taglib/toolkit
)

target_link_libraries(MP3ME PRIVATE tag)