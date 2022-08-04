#ifndef VULKAN_BUFFERS_H
#define VULKAN_BUFFERS_H

#ifndef GLFW_INCLUDE_VULKAN
#define GLFW_INCLUDE_VULKAN
#endif

#ifndef GLM_FORCE_DEFAULT_ALIGNED_GENTYPES
#define GLM_FORCE_DEFAULT_ALIGNED_GENTYPES
#endif

#include <glm/glm.hpp>
#include <GLFW/glfw3.h>
#include <stdexcept>
#include <vector>

#include "vertex.h"

const int MAX_FRAMES_IN_FLIGHT = 2;

struct UniformBufferObject {
    alignas(16) glm::mat4 model;
    alignas(16) glm::mat4 view;
    alignas(16) glm::mat4 proj;
};

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

void createVertexBuffer(VkDevice& device, VkPhysicalDevice& physicalDevice, VkCommandPool& commandPool,
                        VkQueue& graphicsQueue, std::vector<Vertex>& vertices, VkBuffer& vertexBuffer,
                        VkDeviceMemory& vertexBufferMemory);

void createIndexBuffer(VkDevice& device, VkPhysicalDevice& physicalDevice,
                       VkCommandPool& commandPool, VkQueue& graphicsQueue,
                       std::vector<uint32_t>& indices, VkBuffer& indexBuffer,
                       VkDeviceMemory& indexBufferMemory);

void createUniformBuffers(VkDevice& device,
                          VkPhysicalDevice& physicalDevice,
                          std::vector<VkBuffer>& uniformBuffers,
                          std::vector<VkDeviceMemory>& uniformBuffersMemory);

void updateUniformBuffer(VkDevice& device,
                         uint32_t currentImage,
                         std::vector<VkDeviceMemory>& uniformBuffersMemory,
                         VkExtent2D& swapChainExtent);

void createFramebuffers(VkDevice device, std::vector<VkImageView>& swapChainImageViews,
                        std::vector<VkFramebuffer>& swapChainFramebuffers, VkImageView& depthImageView,
                        VkRenderPass& renderPass, VkExtent2D& swapChainExtent);

#endif //VULKAN_BUFFERS_H
