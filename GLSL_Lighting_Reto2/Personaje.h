
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include "glsl.h"
#include <time.h>


#pragma once
class Personaje
{
	public:
		Personaje(){};
		void dibujarPersonaje(int segmentos, float x, float y, float z, float alfa);
		void dibujarCola(int segmentos, float x, float y, float z, float alfa);
};

