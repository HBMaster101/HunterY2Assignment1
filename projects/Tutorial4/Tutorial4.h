#pragma once

#include "Application.h"
#include "ParticleSystem.h"
#include <glm/glm.hpp>

unsigned int m_vertShader;
unsigned int m_fragShader;
unsigned int m_shader;

struct Vertex4p4c
{
	glm::vec4 position;
	glm::vec4 color;
};

// derived application class that wraps up all globals neatly
class Tutorial4 : public Application
{
public:

	Tutorial4();
	virtual ~Tutorial4();

protected:

	virtual bool onCreate(int a_argc, char* a_argv[]);
	virtual void onUpdate(float a_deltaTime);
	virtual void onDraw();
	virtual void onDestroy();

	glm::mat4	m_cameraMatrix;
	glm::mat4	m_projectionMatrix;

	ParticleEmitter* m_emitter;
};