#include "Personaje.h"


void Personaje:: dibujarPersonaje(int segmentos, float x, float y, float z, float alfa) {
    glPushMatrix();
        for (int i = 0; i < segmentos; i++) {
            glTranslatef(0.5, 0.0, 0.0);
            glRotatef((GLfloat)alfa*2, 0.0, 0.0, 1.0);
            glTranslatef(0.5, 0.0, 0.0);
            glPushMatrix();
            glScalef(1.0, 0.4, 0.5);
                glutSolidCube(2.0);
            glPopMatrix();
        }
    glPopMatrix();
};

void Personaje::dibujarCola(int segmentos, float x, float y, float z, float alfa) {
    glPushMatrix();
    glTranslatef(-0.5, 0.4, 0.5);
    for (int i = 0; i < segmentos; i++) {
        glTranslatef(0.5, 0.0, 0.0);
        glRotatef((GLfloat)alfa + (i * 2), 0.0, 0.0, 1.5); //rotar en eje z
        glRotatef((GLfloat)alfa + (i * 2), 1.0, 0.0, 0.0); //rotar en eje x
        glTranslatef(0.5, 0.0, 0.0);
        glPushMatrix();
            glScalef(1.0, 0.5,0.5);
            glutSolidSphere(0.8, 20, 20);
        glPopMatrix();
    }
    glPopMatrix(); 

 
}