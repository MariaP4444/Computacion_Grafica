#include "cubo.h"


void cubo::dibujarCubo1(float x, float y, float z, float tamanio, int angulo) {
	glPushMatrix();
		glRotatef(angulo, -0.5, 0,1);
		glTranslatef(x, y, z);
		glutSolidCube(tamanio);
	glPopMatrix();
};

void cubo::dibujarCubo2(float x, float y, float z, float tamanio, int angulo) {
	glPushMatrix();
		glTranslatef(x, y, z);
		glRotatef(angulo, 0.5, 0, 1); // con respecto a su mismo eje
		glutSolidCube(tamanio);
	glPopMatrix();
};