#pragma once

#include <iostream>
#include "GLFW/glfw3.h"

static void glfw_error_callback(int error, const char *description);
static void framebuffer_size_callback(GLFWwindow *window, int width, int height);
void teardown(GLFWwindow *window);
void startNewFrame();
void endFrame(GLFWwindow *window);
void setPixel(int width, int height, GLubyte r, GLubyte g, GLubyte b);
void drawPixelBuffer();
GLFWwindow* InitializeWindow();
