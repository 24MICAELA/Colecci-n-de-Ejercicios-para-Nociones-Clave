cmake_minimum_required(VERSION 3.29)
project(Nociones_Clave)

set(CMAKE_CXX_STANDARD 14)

add_executable(Nociones_Clave
    main.cpp
        persona/persona.h
        persona/persona.cpp
        estudiante/estudiante.h
        estudiante/estudiante.cpp)
