cmake_minimum_required(VERSION 3.17)
project(FuncionesYCadenas C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(FuncionesYCadenas
        funciones.c
        funciones.h
        main.c)
