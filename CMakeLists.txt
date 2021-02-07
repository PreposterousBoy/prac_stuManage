cmake_minimum_required(VERSION 3.14)
project(stu_manage_sys)
aux_source_directory(. DIR_SRCS)
add_subdirectory(lib)

add_executable(demo main.cpp)
target_link_libraries(demo persion students io)
