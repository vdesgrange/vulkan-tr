#ifndef VULKAN_RENDERING_H
#define VULKAN_RENDERING_H

#ifndef GLFW_INCLUDE_VULKAN
#define GLFW_INCLUDE_VULKAN
#endif

#include <GLFW/glfw3.h>
#include <vector>

#include "buffers.h"

void createSyncObjects(VkDevice& device,
                       std::vector<VkSemaphore>& imageAvailableSemaphores,
                       std::vector<VkSemaphore>& renderFinishedSemaphores,
                       std::vector<VkFence>& inFlightFences);

#endif //VULKAN_RENDERING_H
