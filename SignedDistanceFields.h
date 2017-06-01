#pragma once

#include "PerfFramework.h"
#include "Voxels.h"

#include <GL/glew.h>
#include <glm/glm.hpp>

// Runs a performance test that uses signed distance fields
PerfRecord RunSdfTest(VoxelSet& model, glm::ivec3 gridSize, glm::vec3 voxelSpacing);
