cmake_minimum_required (VERSION 3.0)
cmake_policy(SET CMP0072 NEW)

project(opengl-rl)

find_package(OpenGL REQUIRED)

include_directories(
    /usr/include/GL/
    /usr/include/GLFW/
    /usr/include/glm/
)

set(GLEW_LIBRARY
    /usr/lib/x86_64-linux-gnu/libGLEW.so)

set(ALL_LIBS
    ${OPENGL_LIBRARY}
    glfw
    ${GLEW_LIBRARY})

add_definitions(
    -DTW_STATIC
    -DTW_NO_LIB_PRAGMA
    -DTW_NO_DIRECT3D
    -DGLEW_STATIC
    -D_CRT_SECURE_NO_WARNINGS
    -lGL
    -lGLEW
    -lglfw
)

set(triangle_srcs "./gl_triangle.cpp")
set(triangle_hdrs "./gl_triangle.hpp")

add_library(gl_triangle
    ${triangle_srcs}
    ${triangle_hdrs})

add_executable(main "./main.cpp")

target_link_libraries(main
    gl_triangle
    ${ALL_LIBS})

