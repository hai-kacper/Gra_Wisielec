cmake_minimum_required(VERSION 3.20)
project(Gra_Wisielec)

set(CMAKE_CXX_STANDARD 14)

include_directories(wisielec)

add_executable(Gra_Wisielec
        wisielec/kat_losowanie.cpp
        wisielec/menu.cpp
        wisielec/main.cpp
        wisielec/wszystko.h)

#testinglibrary
add_executable(wisielec_test wisielec/test.cpp)

#testy
enable_testing()

add_test(NAME test1
        COMMAND $<TARGET_FILE:wisielec_test>
        )

set(CMAKE_CXX_STANDARD_LIBRARIES "-static-libgcc -static-libstdc++ -lwsock32 -lws2_32 ${CMAKE_CXX_STANDARD_LIBRARIES}")

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,-Bstatic,--whole-archive -lwinpthread -Wl,--no-whole-archive")

