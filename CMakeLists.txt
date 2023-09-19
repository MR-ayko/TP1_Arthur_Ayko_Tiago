cmake_minimum_required(VERSION 3.25)
project(TP1 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(TP1
        main.c Carta.h Carta.c ListaDeCartas.c ListaDeCartas.h Mesa.c Mesa.h)
