#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

// std
#include <string>

namespace mve {

	class MveWindow {
	public:
		MveWindow(int w, int h, std::string name);
		~MveWindow();

		MveWindow(const MveWindow&) = delete;
		MveWindow& operator=(const MveWindow&) = delete;

		bool shouldClose() { return glfwWindowShouldClose(window); }

	private:
		void initWindow();

		const int width;
		const int height;
		std::string windowName;
		GLFWwindow* window;
	};
}  // namespace mve
