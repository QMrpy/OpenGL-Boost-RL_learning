#ifndef __GL_TRIANGLE_H
#define __GL_TRIANGLE_H

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

class Triangle {
    public:
        Triangle();
        void createShaders(unsigned int& shaderProgram, unsigned int& VAO, unsigned int& VBO);
        void display(unsigned int& shaderProgram, unsigned int& VAO);
        void deleteShaders(unsigned int& shaderProgram, unsigned int& VAO, unsigned int& VBO);
        
    private:
        const char* vertexShaderSource;
        const char* fragmentShaderSource;
        void compileShaders(unsigned int& shaderProgram);
};

#endif

