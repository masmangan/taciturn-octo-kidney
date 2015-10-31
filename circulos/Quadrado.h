#ifndef QUADRADO_H
#define QUADRADO_H

#include "Figura.h"

class Quadrado: public Figura {
	public:
		Quadrado (float x, float y, float lado);
		void draw();
		bool acertou(int, int);
	private:
		float lado;
};

#endif
