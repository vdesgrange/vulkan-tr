cmake_minimum_required(VERSION 3.21)
project(vulkan)

IF(APPLE)
    set(CMAKE_THREAD_LIBS_INIT "-lpthread")
    set(CMAKE_HAVE_THREADS_LIBRARY 1)
    set(CMAKE_USE_WIN32_THREADS_INIT 0)
    set(CMAKE_USE_PTHREADS_INIT 1)
    set(THREADS_PREFER_PTHREAD_FLAG ON)
ENDIF()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}")

option(TRACY_ENABLE "" ON)
option(TRACY_ON_DEMAND "" ON)

file(GLOB_RECURSE EXTERNAL "src/external/*.h")
file(GLOB_RECURSE CORE "src/core/*.cpp" "src/core/include/*.h")

add_executable(vulkan src/main.cpp ${EXTERNAL} ${CORE} 3rdparty/tracy/public/TracyClient.cpp)

include_directories(/usr/local/include/ src/core/include/)

add_subdirectory(3rdparty/tracy/)

find_library(LIBVULKAN13 libvulkan.1.3.204.dylib ~/VulkanSDK/1.3.204.1/macOS/lib/)
find_library(LIBVULKAN1 libvulkan.1.dylib ~/VulkanSDK/1.3.204.1/macOS/lib/)
find_library(LIBGLFW3 libglfw.3.3.dylib /usr/local/Cellar/glfw/3.3.6/lib/)
find_library(GLM glm /usr/local/Cellar/glm/0.9.9.8/lib/)

target_link_libraries(vulkan PRIVATE ${LIBVULKAN13})
target_link_libraries(vulkan PRIVATE ${LIBVULKAN1})
target_link_libraries(vulkan PRIVATE ${LIBGLFW3})
target_link_libraries(vulkan PUBLIC Tracy::TracyClient)

set(VK_ICD_FILENAMES ~/VulkanSDK/1.3.204.1/macOS/share/vulkan/icd.d/MoltenVK_icd.json)
set(VK_LAYER_PATH ~/VulkanSDK/1.3.204.1/macOS/share/vulkan/explicit_layer.d)