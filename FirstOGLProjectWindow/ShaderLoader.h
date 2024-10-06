#pragma once

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

std::string loadShaderSource(const char* shaderFile) {
    std::string shaderCode;
    std::ifstream shaderStream;
    shaderStream.open(shaderFile);
    if (shaderStream.is_open()) {
        std::string line;
        while (std::getline(shaderStream, line)) {
            shaderCode += line + "\n";
        }
        shaderStream.close();
    }
    else {
        std::cerr << "Unable to open file " << shaderFile << std::endl;
        return "";
    }
    return shaderCode;
}