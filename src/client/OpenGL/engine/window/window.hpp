#pragma once

#include "color.hpp"
#include "glad/glad.h"
#include "GLFW/glfw3.h"
#include "windowConstructor.h"

namespace gl {
class Window {
private:
  GLFWwindow* window;

public:
  Window(const Window&) = delete;
  Window(const WindowConstructor& param = windowConstructorDefault);
  ~Window();

  void select();
  void close();
  bool shouldClose();
  void swapBuffer();
  int getKeyStatus(const int& key);

  static void setViewPort(const int width, const int height);
  static void clearSelectedWindow();
  static void setClearColor(const Color& color);

private:
  static void eventViewPortChange(GLFWwindow* window,
                                  const int width,
                                  const int height);
};
}  // namespace gl