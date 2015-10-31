#ifndef CIRCULO_H
#define CIRCULO_H

#include "Figura.h"

class Circulo: public Figura {
	public:
		Circulo (float x, float y, float r);
		void draw();
		bool acertou(int, int);
	private:
		float raio;
};

#endif
