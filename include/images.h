#ifndef VULKAN_IMAGES_H
#define VULKAN_IMAGES_H

#ifndef GLFW_INCLUDE_VULKAN
#define GLFW_INCLUDE_VULKAN
#endif

#include <GLFW/glfw3.h>
#include <stdexcept>

#include "../include/buffers.h"

void createImage(VkDevice& device,
                 VkPhysicalDevice& physicalDevice,
                 uint32_t width,
                 uint32_t height,
                 VkFormat format,
                 VkImageTiling tiling,
                 VkImageUsageFlags usage,
                 VkMemoryPropertyFlags properties,
                 VkImage& image,
                 VkDeviceMemory& imageMemory);

void transitionImageLayout(VkDevice& device,
                           VkCommandPool& commandPool,
                           VkQueue& graphicsQueue,
                           VkImage image,
                           VkFormat format,
                           VkImageLayout oldLayout,
                           VkImageLayout newLayout);

bool hasStencilComponent(VkFormat format);

#endif //VULKAN_IMAGES_H