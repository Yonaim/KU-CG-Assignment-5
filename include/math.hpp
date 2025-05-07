#ifndef MATH_HPP
#define MATH_HPP

#include <glm/glm.hpp>

/**
 * Transformation (Rasterization) Pipeline
 *
 * 1. Modeling Transform: Position and orient objects in world coordinates
 * 2. Camera Transform: Transform from world coordinates to camera coordinate
 * frame
 * 3. Projection Transform: Project onto image plane
 * 4. Viewport Transform: Position image on screen
 */

#define DEGREE_TO_RADIAN(degree) ((degree) * (M_PI / 180.0f))

namespace math
{
glm::mat4 identity(void);
glm::mat4 translate(const glm::vec3 &translation);
glm::mat4 rotate(const glm::vec3 angle);
glm::mat4 scale(const glm::vec3 &scaling);
glm::mat4 view(const glm::vec3 &eye, const glm::vec3 &center,
			   const glm::vec3 &world_up);
glm::mat4 perspective(float fovy, float aspect, float near, float far);
glm::mat4 viewport(int nx, int ny);
} // namespace math

#endif
