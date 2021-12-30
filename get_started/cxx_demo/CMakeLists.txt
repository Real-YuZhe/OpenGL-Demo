cmake_minimum_required(VERSION 3.21)

project(CXX_Demo)

add_compile_options(-fdiagnostics-color=always)

add_executable(${PROJECT_NAME} main.cc)

target_link_libraries(${PROJECT_NAME} PRIVATE glut GL GLU)
