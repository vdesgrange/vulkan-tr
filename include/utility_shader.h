#ifndef VULKAN_UTILITY_SHADER_H
#define VULKAN_UTILITY_SHADER_H

#define GLFW_INCLUDE_VULKAN

#include <iostream>
#include <stdexcept>
#include <vector>
#include <limits>
#include <fstream>
#include <vector>
#include <GLFW/glfw3.h>

std::vector<char> readFile(const std::string& filename);
VkShaderModule createShaderModule(VkDevice *device, const std::vector<char>& code);

#endif //VULKAN_UTILITY_SHADER_H
