#ifndef VULKAN_TEXTURE_H
#define VULKAN_TEXTURE_H

#include "../include/buffers.h"
#include "../include/model_loader.h"
#include "../include/images.h"

void createTextureImage(VkDevice& device,
                        VkCommandPool& commandPool,
                        VkQueue& graphicsQueue,
                        VkPhysicalDevice& physicalDevice,
                        VkImage& textureImage,
                        VkDeviceMemory& textureImageMemory);

void createTextureImageView(VkDevice& device, VkImage& textureImage, VkImageView& textureImageView);

void createTextureSampler(VkDevice& device, VkPhysicalDevice& physicalDevice, VkSampler& textureSampler);

#endif //VULKAN_TEXTURE_H
