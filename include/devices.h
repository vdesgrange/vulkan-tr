#ifndef VULKAN_DEVICES_H
#define VULKAN_DEVICES_H

#ifndef GLFW_INCLUDE_VULKAN
#define GLFW_INCLUDE_VULKAN
#endif

#include <GLFW/glfw3.h>
#include <vector>
#include <set>
#include <string>

#include "../include/swap_chain.h"

void createSurface(VkInstance& instance, GLFWwindow* window, VkSurfaceKHR& surface);

void pickPhysicalDevice(VkInstance& instance,
                        VkPhysicalDevice& physicalDevice,
                        VkSurfaceKHR& surface,
                        const std::vector<const char*>& deviceExtensions);

bool isDeviceSuitable(VkPhysicalDevice device, const std::vector<const char*>& deviceExtensions, VkSurfaceKHR& surface);

bool checkDeviceExtensionSupport(VkPhysicalDevice device, const std::vector<const char*>& deviceExtensions);

#endif //VULKAN_DEVICES_H
