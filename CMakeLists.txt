cmake_minimum_required(VERSION 3.10)
project(MyProject C)

set(CMAKE_C_STANDARD 99)

add_executable(MyProject src/main.c src/file1.c src/file2.c)
target_include_directories(MyProject PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
