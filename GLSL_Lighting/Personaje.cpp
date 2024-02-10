#include "Personaje.h"


void Personaje:: dibujarPersonaje(float x, float y, float z) {
    glPushMatrix();
        glPushMatrix();
            //glRotatef(45,0,0,1);  con respecto al origen del mundo 
            glTranslatef(x, y, z);;
            glRotatef(45, 0, 0, 1); // con respecto a su mismo eje
            glutSolidCube(0.5);
        glPopMatrix();

        glPushMatrix();
            glTranslatef( x, y, z);
            glBegin(GL_TRIANGLES);
                glVertex3f(1, 0, 0);
                glVertex3f(0, 1, 0);
                glVertex3f(-1, 0, 0);
            glEnd();
        glPopMatrix();
    glPopMatrix();
};