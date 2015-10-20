#ifndef CIRCULO_H
#define CIRCULO_H

#include "Figura.h"

class Circulo: public Figura {
	public:
		Circulo (float x, float y, float r);
		void draw();
	private:
		float raio;
};

#endif
