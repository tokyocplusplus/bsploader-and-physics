#ifndef CAMERA_H
#define CAMERA_H
#include<glm/glm.hpp>
#include<glm/gtc/type_ptr.hpp>
#include<glm/gtc/matrix_transform.hpp>
#include<glm/gtc/matrix_inverse.hpp>

class Camera
{
public:
	glm::vec3 position;
	glm::vec3 cameraTarget = glm::vec3(0, 0, 0);
	glm::vec3 cameraDir = glm::normalize(position - cameraTarget);
	glm::vec3 up = glm::vec3(0, 1, 0);
	glm::vec3 cameraRight = glm::normalize(glm::cross(up, cameraDir));

	void update(glm::mat4 view)
	{
		glm::vec3 cameraUp = glm::cross(cameraDir, cameraRight);
		cameraRight = glm::normalize(glm::cross(up, cameraDir));
		cameraDir = glm::normalize(position - cameraTarget);

		 
	}
};

#endif