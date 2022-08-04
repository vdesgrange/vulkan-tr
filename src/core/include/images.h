#ifndef VULKAN_IMAGES_H
#define VULKAN_IMAGES_H

#ifndef GLFW_INCLUDE_VULKAN
#define GLFW_INCLUDE_VULKAN
#endif

#include <GLFW/glfw3.h>
#include <stdexcept>
#include <vector>

#include "../../external/stb_image.h"
#include "buffers.h"

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

VkImageView createImageView(VkDevice& device,
                            VkImage& image,
                            VkFormat format,
                            VkImageAspectFlags aspectFlags);

void createImageViews(VkDevice& device,
                      VkFormat& swapChainImageFormat,
                      std::vector<VkImage>& swapChainImages,
                      std::vector<VkImageView>& swapChainImageViews);

void transitionImageLayout(VkDevice& device,
                           VkCommandPool& commandPool,
                           VkQueue& graphicsQueue,
                           VkImage image,
                           VkFormat format,
                           VkImageLayout oldLayout,
                           VkImageLayout newLayout);

void copyBufferToImage(VkDevice& device,
                       VkCommandPool& commandPool,
                       VkQueue& graphicsQueue,
                       VkBuffer buffer,
                       VkImage image,
                       uint32_t width,
                       uint32_t height);

bool hasStencilComponent(VkFormat format);

#endif //VULKAN_IMAGES_H