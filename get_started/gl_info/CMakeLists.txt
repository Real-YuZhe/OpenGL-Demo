cmake_minimum_required(VERSION 3.21)

project(GL_Info)

add_compile_options(-fdiagnostics-color=always)

add_executable(${PROJECT_NAME} main.c)

target_link_libraries(${PROJECT_NAME} PRIVATE glut GL GLU)
