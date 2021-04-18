cmake_minimum_required(VERSION 3.17)
project(ListaSimple)

set(CMAKE_CXX_STANDARD 20)

add_executable(ListaSimple main.cpp Persona.cpp Persona.h Nodo.cpp Nodo.h Lista.cpp Lista.h)