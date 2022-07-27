#ifndef VULKAN_BUFFERS_H
#define VULKAN_BUFFERS_H

#ifndef GLFW_INCLUDE_VULKAN
#define GLFW_INCLUDE_VULKAN
#endif

#include <GLFW/glfw3.h>
#include <stdexcept>

uint32_t findMemoryType(VkPhysicalDevice& physicalDevice, uint32_t typeFilter, VkMemoryPropertyFlags properties);

VkCommandBuffer beginSingleTimeCommand(VkDevice& device, VkCommandPool& commandPool);

void endSingleTimeCommand(VkCommandBuffer commandBuffer,
                          VkCommandPool& commandPool,
                          VkDevice& device,
                          VkQueue& graphicsQueue);

void createBuffer(VkDevice& device, VkDeviceSize size,
                  VkPhysicalDevice& physicalDevice, VkBufferUsageFlags usage,
                  VkMemoryPropertyFlags properties, VkBuffer& buffer,
                  VkDeviceMemory& bufferMemory);

void copyBuffer(VkDevice& device,
                VkCommandPool& commandPool,
                VkQueue& graphicsQueue,
                VkBuffer srcBuffer,
                VkBuffer dstBuffer,
                VkDeviceSize size);

#endif //VULKAN_BUFFERS_H
