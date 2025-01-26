cmake_minimum_required(VERSION 3.28)  #Noten
project(thorsten LANGUAGES C)  #Noten
add_library(noten note.c)
add_executable(thorsten main.c)
target_link_libraries(thorsten noten)