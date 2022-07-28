#ifndef VULKAN_TEXTURE_H
#define VULKAN_TEXTURE_H

#include "../include/buffers.h"
#include "../include/model_loader.h"
#include "../include/images.h"
#include "../include/stb_image.h"

void createTextureImage(VkDevice& device,
                        VkPhysicalDevice& physicalDevice,
                        VkImage& textureImage,
                        VkDeviceMemory& textureImageMemory);

#endif //VULKAN_TEXTURE_H
