cmake_minimum_required(VERSION 3.17)
project(Funciones C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Funciones
        funciones.c
        funciones.h
        main.c)
