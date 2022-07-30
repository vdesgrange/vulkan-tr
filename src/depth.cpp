#include "../include/depth.h"

void createDepthResources(VkDevice& device, VkPhysicalDevice& physicalDevice, VkCommandPool& commandPool,
                          VkQueue& graphicsQueue, VkExtent2D& swapChainExtent,
                          VkImage& depthImage, VkImageView& depthImageView, VkDeviceMemory& depthImageMemory) {
    VkFormat depthFormat = findDepthFormat(physicalDevice);
    createImage(device,
                physicalDevice,
                swapChainExtent.width,
                swapChainExtent.height,
                depthFormat,
                VK_IMAGE_TILING_OPTIMAL,
                VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT,
                VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT,
                depthImage,
                depthImageMemory);

    depthImageView = createImageView(device,depthImage,depthFormat,VK_IMAGE_ASPECT_DEPTH_BIT);

    transitionImageLayout(device,
                          commandPool,
                          graphicsQueue,
                          depthImage,
                          depthFormat,
                          VK_IMAGE_LAYOUT_UNDEFINED,
                          VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL);
}