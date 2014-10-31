#pragma once

#include "Application.h"
#include "FBXFile.h"
#include <glm/glm.hpp>
#include <stb_image.h>

unsigned int m_vertShader;
unsigned int m_fragShader;
unsigned int m_shader;

FBXFile* m_fbx;

struct Vertex4p4c
{
	glm::vec4 position;
	glm::vec4 color;
};

// derived application class that wraps up all globals neatly
class Tutorial5 : public Application
{
public:

	Tutorial5();
	virtual ~Tutorial5();

protected:

	virtual bool onCreate(int a_argc, char* a_argv[]);
	virtual void onUpdate(float a_deltaTime);
	virtual void onDraw();
	virtual void onDestroy();
	virtual void createOpenGLBuffers(FBXFile* a_fbx);
	virtual void cleanupOpenGLBuffers(FBXFile* a_fbx);

	glm::mat4	m_cameraMatrix;
	glm::mat4	m_projectionMatrix;

	glm::vec3 m_lightAmbient;
	glm::vec3 m_lightDirection;
	glm::vec4 m_lightColour;
	glm::vec3 m_lightSpecular;
};