#include "Cubo.h"

void Cubo::DibujarCubo(float x1, float y1, float z1, int angle, int x2, int y2, int z2)
{
    glPushMatrix(); //Conserva el origen de cada objeto
        
        glPushMatrix();

            glTranslatef(x1,y1,z1);    // Poner el cubo a la derecha de la tetera (X,Y,Z)
            glRotatef(angle,x2,y2,z2); //Rotacion del objeto en su mismo eje
            glutSolidCube(0.5); //Poner el cubo
        
        glPopMatrix();

    glPopMatrix();  //Conserva el origen de cada objeto

}