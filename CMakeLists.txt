cmake_minimum_required(VERSION 3.21)
project(vulkan)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(vulkan
        src/main.cpp
        src/utility_shader.cpp
        include/stb_image.h
        include/utility_shader.h
        # include/tiny_obj_loader.h
        include/vertex.h
        include/model_loader.h
        src/model_loader.cpp
        )

include_directories(/usr/local/include/ ./include/)

find_library(LIBVULKAN13 libvulkan.1.3.204.dylib ~/VulkanSDK/1.3.204.1/macOS/lib/)
find_library(LIBVULKAN1 libvulkan.1.dylib ~/VulkanSDK/1.3.204.1/macOS/lib/)
find_library(LIBGLFW3 libglfw.3.3.dylib /usr/local/Cellar/glfw/3.3.6/lib/)
find_library(GLM glm /usr/local/Cellar/glm/0.9.9.8/lib/)

target_link_libraries(vulkan ${LIBVULKAN13})
target_link_libraries(vulkan ${LIBVULKAN1})
target_link_libraries(vulkan ${LIBGLFW3})

set(VK_ICD_FILENAMES ~/VulkanSDK/1.3.204.1/macOS/share/vulkan/icd.d/MoltenVK_icd.json)
set(VK_LAYER_PATH ~/VulkanSDK/1.3.204.1/macOS/share/vulkan/explicit_layer.d)