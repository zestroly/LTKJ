cmake_minimum_required(VERSION 3.23)
project(LTKJ)

set(CMAKE_CXX_STANDARD 17)


file(GLOB_RECURSE LTKJ_SRC
        src/Flow.cpp
        )

file(GLOB_RECURSE LTKJ_INC
        src/Flow.h
        src/unitls.h
        )



add_executable(LTKJ main.cpp ${LTKJ_SRC}  ${LTKJ_INC})
