#include "tetera.h"


void tetera::dibujarTetera(float x, float y, float z, float tamanio){
    glPushMatrix();
        glTranslatef(x, y, z);
        glutSolidTeapot(tamanio);
    glPopMatrix();
};
