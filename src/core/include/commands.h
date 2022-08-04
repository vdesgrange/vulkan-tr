#ifndef VULKAN_COMMANDS_H
#define VULKAN_COMMANDS_H

#ifndef GLFW_INCLUDE_VULKAN
#define GLFW_INCLUDE_VULKAN
#endif

#include <GLFW/glfw3.h>
#include <vector>

#include "swap_chain.h"
#include "buffers.h"

void createCommandPool(VkDevice& device, VkPhysicalDevice& physicalDevice,
                       VkCommandPool& commandPool, VkSurfaceKHR& surface);

void createCommandBuffers(VkDevice& device, VkCommandPool& commandPool, std::vector<VkCommandBuffer>& commandBuffers);

void recordCommandBuffer(VkCommandBuffer commandBuffer,
                         uint32_t imageIndex,
                         VkRenderPass& renderPass,
                         VkPipelineLayout& pipelineLayout,
                         VkPipeline& graphicsPipeline,
                         std::vector<VkDescriptorSet>& descriptorSets,
                         VkBuffer vertexBuffer,
                         VkBuffer indexBuffer,
                         std::vector<uint32_t>& indices,
                         std::vector<VkFramebuffer>& swapChainFramebuffers,
                         VkExtent2D& swapChainExtent,
                         uint32_t currentFrame);

#endif //VULKAN_COMMANDS_H
