#include "triangulo.h"


void triangulo::dibujarTriangulo(float x, float y, float z, int lado) {
    glPushMatrix();
    glTranslatef(x, y, z);
    glBegin(GL_TRIANGLES);
    glVertex3f(lado, 0, 0);
    glVertex3f(0, lado, 0);
    glVertex3f(-lado, 0, 0);
    glEnd();
    glPopMatrix();
};