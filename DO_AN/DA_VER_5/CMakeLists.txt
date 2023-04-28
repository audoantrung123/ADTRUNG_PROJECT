cmake_minimum_required(VERSION 3.20)

project("DA_VER_5" C CXX ASM)

include(cmake/st-project.cmake)

add_executable(${PROJECT_NAME})
add_st_target_properties(${PROJECT_NAME})