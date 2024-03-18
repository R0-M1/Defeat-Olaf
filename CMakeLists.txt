cmake_minimum_required(VERSION 3.27)
project(Defeat_Olaf)

file(GLOB SOURCE_FILES ./src/*.cpp)
file(GLOB HEADER_FILES ./src/*.h)

add_executable(Defeat_Olaf ${SOURCE_FILES} ${HEADER_FILES})