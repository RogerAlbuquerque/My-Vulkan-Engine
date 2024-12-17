#include "mve_app_base.hpp"

namespace mve {

    void MveAppBase::run() {
        while (!mveWindow.shouldClose()) {
            glfwPollEvents();
        }
    }
}  // namespace mve