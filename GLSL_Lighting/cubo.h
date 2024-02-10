#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include "glsl.h"
#include <time.h>

#pragma once
class cubo
{
public:
	cubo() {};
	void dibujarCubo1(float x, float y, float z, float tamanio, int angulo);
	void dibujarCubo2(float x, float y, float z, float tamanio, int angulo);
};

