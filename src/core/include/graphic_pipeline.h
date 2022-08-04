#ifndef VULKAN_GRAPHIC_PIPELINE_H
#define VULKAN_GRAPHIC_PIPELINE_H

#ifndef GLFW_INCLUDE_VULKAN
#define GLFW_INCLUDE_VULKAN
#endif

#include <GLFW/glfw3.h>
#include <array>

#include "vertex.h"
#include "utils.h"
#include "utility_shader.h"

void createRenderPass(VkDevice& device,
                      VkPhysicalDevice& physicalDevice,
                      VkRenderPass& renderPass,
                      VkFormat& swapChainImageFormat);

void createDescriptorSetLayout(VkDevice& device, VkDescriptorSetLayout& descriptorSetLayout);

void createGraphicsPipeline(VkDevice& device,
                            VkRenderPass& renderPass,
                            VkDescriptorSetLayout& descriptorSetLayout,
                            VkPipelineLayout& pipelineLayout,
                            VkPipeline& graphicsPipeline,
                            VkExtent2D& swapChainExtent);

#endif //VULKAN_GRAPHIC_PIPELINE_H
