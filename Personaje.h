#pragma once

#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"
#include <time.h>



class Personaje
{
public:
	Personaje() {};
	void DibujarPersonaje(int seg, float alfa, float x, float y, float z);
};

