cmake_minimum_required(VERSION 3.10)
project(cdhGEEditor)

set(CMAKE_CXX_STANDARD 17)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/CMakeModules)
find_package(cdhGE REQUIRED)
include_directories(${cdhGE_INCLUDE_DIRS})

add_executable(
    cdhGEEditor
    main.cpp
)

target_link_libraries(
    cdhGEEditor
    ${cdhGE_LIBRARIES}
)

message(STATUS ${cdhGE_LIBRARIES})