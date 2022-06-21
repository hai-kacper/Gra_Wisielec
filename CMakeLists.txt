cmake_minimum_required(VERSION 3.20)
project(Wisielec)

set(CMAKE_CXX_STANDARD 14)

include_directories(wisielec)

add_executable(Gra_Wisielec
        gra.cpp
        menu.cpp
        main.cpp
        wszystko.h)

add_library(gra gra.cpp)

#testinglibrary
add_executable(test_czy_znak_jest_litera test1.cpp)
target_link_libraries(test_czy_znak_jest_litera PRIVATE gra)

add_executable(test_mala_litera_na_duza test2.cpp)
target_link_libraries(test_mala_litera_na_duza PRIVATE gra)

#testy
enable_testing()

add_test(NAME test1
        COMMAND $<TARGET_FILE:test_czy_znak_jest_litera>
        )

add_test(NAME test2
        COMMAND $<TARGET_FILE:test_mala_litera_na_duza>
)

set(CMAKE_CXX_STANDARD_LIBRARIES "-static-libgcc -static-libstdc++ -lwsock32 -lws2_32 ${CMAKE_CXX_STANDARD_LIBRARIES}")

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,-Bstatic,--whole-archive -lwinpthread -Wl,--no-whole-archive")

