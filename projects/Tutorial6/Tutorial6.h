#pragma once

#include "Application.h"
#include "GPUParticlesSystem.h"
#include <glm/glm.hpp>
#include <stb_image.h>

// derived application class that wraps up all globals neatly
class Tutorial6 : public Application
{
public:

	Tutorial6();
	virtual ~Tutorial6();

protected:

	virtual bool onCreate(int a_argc, char* a_argv[]);
	virtual void onUpdate(float a_deltaTime);
	virtual void onDraw();
	virtual void onDestroy();

	glm::mat4	m_cameraMatrix;
	glm::mat4	m_projectionMatrix;

	GPUParticleEmitter* m_emitter;
};