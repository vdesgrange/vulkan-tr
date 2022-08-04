#ifndef VULKAN_UTILS_H
#define VULKAN_UTILS_H

#ifndef GLFW_INCLUDE_VULKAN
#define GLFW_INCLUDE_VULKAN
#endif

#include <GLFW/glfw3.h>
#include <vector>

VkFormat findSupportedFormat(VkPhysicalDevice& physicalDevice,
                             const std::vector<VkFormat>& candidates,
                             VkImageTiling tiling,
                             VkFormatFeatureFlags features);

VkFormat findDepthFormat(VkPhysicalDevice& physicalDevice);

#endif //VULKAN_UTILS_H
