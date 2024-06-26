#pragma once

#include <memory>
#include "engine.hpp"
#include "keys.hpp"
#include "keysHandler.hpp"
#include "mesh.hpp"
#include "my_log.h"

namespace gl {
class CloseWindow : public virtual IGlObject {
private:
  std::weak_ptr<Engine> engine;
  std::shared_ptr<function> closeWindow;
  std::shared_ptr<function> creteNewTriangle;

public:
  CloseWindow(const CloseWindow&) = delete;
  CloseWindow(CloseWindow&&) = delete;
  CloseWindow& operator=(const CloseWindow&) = delete;
  CloseWindow& operator=(CloseWindow&&) = delete;

  CloseWindow(std::shared_ptr<Engine> engine);
};
}  // namespace gl