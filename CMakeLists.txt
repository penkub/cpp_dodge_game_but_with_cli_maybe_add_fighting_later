cmake_minimum_required(VERSION 3.15)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


project(game)

add_executable(game main.cpp player/player.cpp player/player.hpp global_variable.hpp)
target_precompile_headers(game PRIVATE
    <utility>
)