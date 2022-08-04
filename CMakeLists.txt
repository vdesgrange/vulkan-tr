cmake_minimum_required(VERSION 3.21)
project(vulkan)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

file(GLOB_RECURSE EXTERNAL "src/external/*.h")
file(GLOB_RECURSE CORE "src/core/*.cpp" "src/core/include/*.h")

add_executable(vulkan src/main.cpp ${EXTERNAL} ${CORE})

#add_executable(vulkan
#        src/main.cpp
#        src/core/utility_shader.cpp
#        src/core/images.cpp
#        src/core/texture.cpp
#        src/core/buffers.cpp
#        src/core/model_loader.cpp
#        src/core/utils.cpp
#        src/core/devices.cpp
#        src/core/swap_chain.cpp
#        src/core/validation_layers.cpp
#        src/core/graphic_pipeline.cpp
#        src/core/depth.cpp
#        src/core/rendering.cpp
#        src/core/commands.cpp
#        src/core/descriptors.cpp
#        src/external/stb_image.h
#        src/core/include/utility_shader.h
#        src/core/include/vertex.h
#        src/core/include/images.h
#        src/core/include/texture.h
#        src/core/include/buffers.h
#        src/core/include/model_loader.h
#        src/core/include/utils.h
#        src/core/include/devices.h
#        src/core/include/swap_chain.h
#        src/core/include/validation_layers.h
#        src/core/include/graphic_pipeline.h
#        src/core/include/depth.h
#        src/core/include/rendering.h
#        src/core/include/commands.h
#        src/core/include/descriptors.h
#        src/external/tiny_obj_loader.h)

include_directories(/usr/local/include/ src/core/include/)

find_library(LIBVULKAN13 libvulkan.1.3.204.dylib ~/VulkanSDK/1.3.204.1/macOS/lib/)
find_library(LIBVULKAN1 libvulkan.1.dylib ~/VulkanSDK/1.3.204.1/macOS/lib/)
find_library(LIBGLFW3 libglfw.3.3.dylib /usr/local/Cellar/glfw/3.3.6/lib/)
find_library(GLM glm /usr/local/Cellar/glm/0.9.9.8/lib/)

target_link_libraries(vulkan ${LIBVULKAN13})
target_link_libraries(vulkan ${LIBVULKAN1})
target_link_libraries(vulkan ${LIBGLFW3})

set(VK_ICD_FILENAMES ~/VulkanSDK/1.3.204.1/macOS/share/vulkan/icd.d/MoltenVK_icd.json)
set(VK_LAYER_PATH ~/VulkanSDK/1.3.204.1/macOS/share/vulkan/explicit_layer.d)