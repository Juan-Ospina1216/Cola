#include "Tetera.h"

void Tetera::dibujarTetera(float x, float y, float z)
{
	glPushMatrix();

		glPushMatrix();
			glTranslatef(x,y,z);
			glutSolidTeapot(0.5);   
		glPopMatrix();

	glPopMatrix();
}