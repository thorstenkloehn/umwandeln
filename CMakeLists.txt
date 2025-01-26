cmake_minimum_required(VERSION 3.12)
project(thorsten)
set(C_STANDARD 23)

# Erstellen der statischen Bibliothek
add_library(umwandeln STATIC umwandeln.c)


