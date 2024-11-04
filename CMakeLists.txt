cmake_minimum_required(VERSION 3.29)
project(Nociones_Clave)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG        7.1.3
)

FetchContent_MakeAvailable(fmt)

add_executable(Nociones_Clave
    main.cpp
        persona/persona.h
        persona/persona.cpp
        estudiante/estudiante.h
        estudiante/estudiante.cpp
        nuevo/nuevo.cpp)

target_link_libraries(Nociones_Clave fmt::fmt)