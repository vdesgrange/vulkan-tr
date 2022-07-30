#ifndef VULKAN_DEPTH_H
#define VULKAN_DEPTH_H

#ifndef GLFW_INCLUDE_VULKAN
#define GLFW_INCLUDE_VULKAN
#endif

#include <GLFW/glfw3.h>
#include "utils.h"
#include "images.h"

void createDepthResources(VkDevice& device, VkPhysicalDevice& physicalDevice, VkCommandPool& commandPool,
                          VkQueue& graphicsQueue, VkExtent2D& swapChainExtent,
                          VkImage& depthImage, VkImageView& depthImageView, VkDeviceMemory& depthImageMemory);
#endif //VULKAN_DEPTH_H
