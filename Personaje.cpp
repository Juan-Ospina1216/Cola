#include "Personaje.h"

void Personaje::DibujarPersonaje(int seg, float alfa, float x, float y, float z)
{
    glPushMatrix();

    glTranslatef(-0.5, 0, 0);
    glRotatef((GLfloat)alfa, 0, 0, 1);
    glTranslatef(0.1, 0, 0);
    glPushMatrix();
    glScalef(0.3, 0.2, 1.0);
    glutSolidCube(0.9);
    glPopMatrix();



    for (int j = 0; j < seg; j++) {
        for (int i = 0; i < seg; i++) {
            glTranslatef(0.1 + (j * 0.08), 0, 0);
            glRotatef((GLfloat)alfa, 0, 0, 0.2 + (j * 0.1));
            glTranslatef(0.1 + (j * 0.08), 0, 0);
            glPushMatrix();
            glScalef(0.3 + (j * 0.2), 0.2, 1);
            glutSolidCube(0.9);
            glPopMatrix();

        }
    }

    glTranslatef(-1, 0, 0);
    glRotatef(330, 0, 0, 0.5);
    glTranslatef(0, 0, 0);
    glPushMatrix();
    glScalef(12, 1.2, 1.0);
    glutSolidCube(0.5);
    glPopMatrix();
    glTranslatef(2.2, 0, 0);
    for (int i = 0; i < 3; i++){
        glTranslatef(0.7, 0, 0);
        glRotatef((GLfloat)alfa, 0, 0, 0.1);
        glTranslatef(0.7, 0, 0);
        glPushMatrix();
        glScalef(1.8, 0.6, 1);
        glutSolidCube(0.9);
        glPopMatrix();
    }

    glTranslatef(1, 0, 0);
    glRotatef(0, 0, 0, 0.5);
    glTranslatef(0, 0, 0);
    glPushMatrix();
    glScalef(3, 0.2, 1.0);
    glutSolidCube(0.5);
    glPopMatrix();
        

        
       

    glPopMatrix();

}