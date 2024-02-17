#include "Triangulo.h"

void Triangulo::DibujarTriangulo(float x, float y, float z) 
{
	glPushMatrix();
        //Dibuja el triangulo
        glPushMatrix();
            glTranslatef(x, y, z);    // Poner el triangulo arriba de la tetera
            glBegin(GL_TRIANGLES);  //Se dibuja el triangulo, como son tres vertices se hace tres veces de acuerdo a la medida en el plano cartesiano
            glVertex3f(1, 0, 0);
            glVertex3f(0, 1, 0);
            glVertex3f(-1, 0, 0);
            glEnd();
        glPopMatrix();
	glPopMatrix();
}
