#pragma once

#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"
#include <time.h>

class Cubo
{
public:
	Cubo() {};
	void DibujarCubo(float x1, float y1, float z1, int angle, int x2, int y2, int z2);
};

