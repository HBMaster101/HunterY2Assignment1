#pragma once

#include "Application.h"
#include <glm/glm.hpp>
#include <stb_image.h>

//Our vertex and index buffers
unsigned int	m_VAO;
unsigned int 	m_VBO;
unsigned int	m_IBO;

unsigned int m_texture;

unsigned int m_vertShader;
unsigned int m_fragShader;
unsigned int m_shader;

unsigned int m_programID;

struct Vertex4p4c
{
	glm::vec4 position;
	glm::vec4 color;
};

// derived application class that wraps up all globals neatly
class Tutorial2 : public Application
{
public:

	Tutorial2();
	virtual ~Tutorial2();

protected:

	virtual bool onCreate(int a_argc, char* a_argv[]);
	virtual void onUpdate(float a_deltaTime);
	virtual void onDraw();
	virtual void onDestroy();
	virtual void GenerateGrid(unsigned int rows, unsigned int cols);

	glm::mat4	m_cameraMatrix;
	glm::mat4	m_projectionMatrix;
};