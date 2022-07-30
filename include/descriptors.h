#ifndef VULKAN_DESCRIPTORS_H
#define VULKAN_DESCRIPTORS_H

#ifndef GLFW_INCLUDE_VULKAN
#define GLFW_INCLUDE_VULKAN
#endif

#include <GLFW/glfw3.h>
#include <array>
#include <vector>

#include "buffers.h"

void createDescriptorPool(VkDevice& device, VkDescriptorPool& descriptorPool);

void createDescriptorSets(VkDevice& device,
                          VkDescriptorPool& descriptorPool,
                          std::vector<VkDescriptorSet>& descriptorSets,
                          VkDescriptorSetLayout& descriptorSetLayout,
                          std::vector<VkBuffer> uniformBuffers,
                          VkImageView& textureImageView,
                          VkSampler& textureSampler);

#endif //VULKAN_DESCRIPTORS_H
