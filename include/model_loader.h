#ifndef VULKAN_MODEL_LOADER_H
#define VULKAN_MODEL_LOADER_H

#include <vector>
#include <unordered_map>

#include "../include/tiny_obj_loader.h"
#include "../include/vertex.h"

const std::string MODEL_PATH = "src/models/viking_room.obj";
const std::string TEXTURE_PATH = "src/textures/viking_room.png";

void loadModel(std::vector<Vertex>& vertices, std::vector<uint32_t>& indices);

#endif //VULKAN_MODEL_LOADER_H
