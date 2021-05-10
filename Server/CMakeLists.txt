cmake_minimum_required(VERSION 3.17)
project(Server)

set(CMAKE_CXX_STANDARD 14)

add_executable(Server main.cpp Server.cpp Server.h Codex.cpp Codex.h Memory.cpp Memory.h)