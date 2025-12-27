#ifndef GEOMETRY_H
#define GEOMETRY_H

class Cube
{
public:
	float vertices[120] =
	{
        -0.5f, -0.5f,  0.5f,  0.0f, 0.0f, // 0: Bottom-left
         0.5f, -0.5f,  0.5f,  1.0f, 0.0f, // 1: Bottom-right
         0.5f,  0.5f,  0.5f,  1.0f, 1.0f, // 2: Top-right
        -0.5f,  0.5f,  0.5f,  0.0f, 1.0f, // 3: Top-left

        // Back face
        -0.5f, -0.5f, -0.5f,  0.0f, 0.0f, // 4: Bottom-left
         0.5f, -0.5f, -0.5f,  1.0f, 0.0f, // 5: Bottom-right
         0.5f,  0.5f, -0.5f,  1.0f, 1.0f, // 6: Top-right
        -0.5f,  0.5f, -0.5f,  0.0f, 1.0f, // 7: Top-left

        // Left face
        -0.5f, -0.5f, -0.5f,  0.0f, 0.0f, // 8: Bottom-left
        -0.5f, -0.5f,  0.5f,  1.0f, 0.0f, // 9: Bottom-right
        -0.5f,  0.5f,  0.5f,  1.0f, 1.0f, // 10: Top-right
        -0.5f,  0.5f, -0.5f,  0.0f, 1.0f, // 11: Top-left

        // Right face
         0.5f, -0.5f,  0.5f,  0.0f, 0.0f, // 12: Bottom-left
         0.5f, -0.5f, -0.5f,  1.0f, 0.0f, // 13: Bottom-right
         0.5f,  0.5f, -0.5f,  1.0f, 1.0f, // 14: Top-right
         0.5f,  0.5f,  0.5f,  0.0f, 1.0f, // 15: Top-left

         // Bottom face
         -0.5f, -0.5f, -0.5f,  0.0f, 0.0f, // 16: Bottom-left
          0.5f, -0.5f, -0.5f,  1.0f, 0.0f, // 17: Bottom-right
          0.5f, -0.5f,  0.5f,  1.0f, 1.0f, // 18: Top-right
         -0.5f, -0.5f,  0.5f,  0.0f, 1.0f, // 19: Top-left

         // Top face
         -0.5f,  0.5f,  0.5f,  0.0f, 0.0f, // 20: Bottom-left
          0.5f,  0.5f,  0.5f,  1.0f, 0.0f, // 21: Bottom-right
          0.5f,  0.5f, -0.5f,  1.0f, 1.0f, // 22: Top-right
         -0.5f,  0.5f, -0.5f,  0.0f, 1.0f  // 23: Top-left
	};

    unsigned int indices[36] =
    {
        // Front face
        0, 1, 2,
        2, 3, 0,

        // Back face
        4, 5, 6,
        6, 7, 4,

        // Left face
        8, 9, 10,
        10, 11, 8,

        // Right face
        12, 13, 14,
        14, 15, 12,

        // Bottom face
        16, 17, 18,
        18, 19, 16,

        // Top face
        20, 21, 22,
        22, 23, 20
    };
};

class Plane
{
public:
    float vertices[20] =
    {
         0.5f, 0.5f, 0.0f,  1.0f,1.0f, // top right
        -0.5f, 0.5f, 0.0f,  0.0f,1.0f, // top left
        -0.5f,-0.5f, 0.0f,  0.0f,0.0f, // bottom left
         0.5f,-0.5f, 0.0f,  1.0f,0.0f  // bottom right
    };
    unsigned int indices[6] =
    {
        0,1,2,
        2,3,0
    };
};

#endif