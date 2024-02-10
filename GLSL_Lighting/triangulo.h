
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include "glsl.h"
#include <time.h>

#pragma once
class triangulo
{
public:
	triangulo() {};
	void dibujarTriangulo(float x, float y, float z, int lado);
};

