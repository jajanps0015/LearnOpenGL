#pragma once

#include <Macros.h>

#include <vector>
#include <Window.h>
#include <Shader.h>

class Vertex
{
public:
    glm::vec2 position;
    glm::vec4 color;
};

namespace FOGrP
{
    class TriangleBuffer
    {
        std::vector<Vertex> mTris;
        Shader *mTrisShader;

        //ID of Vertex Attribute
        GLuint positionID, colorID;
        //A buffer ID
        GLuint bufferID;
        //A Vertex Array ID
        GLuint arrayID;
        //ID of Uniform
        GLuint modelID, viewID, projectionID;

        Window* mWindow;

        glm::mat4 model, view, proj;

    public:

        TriangleBuffer();

        void Init(Window* window);

        void BindVertexData();

        void Draw();

        ~TriangleBuffer();
    };
}

