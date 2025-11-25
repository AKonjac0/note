cmake_minimum_required(VERSION 3.10)

project(GitTest LANGUAGES CXX VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


include_directories(${PROJECT_SOURCE_DIR}/include)


add_library(LIB src/b.cpp)
add_executable(GT src/a.cpp)

target_link_libraries(GT LIB)
