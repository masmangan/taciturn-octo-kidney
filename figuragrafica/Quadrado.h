#ifndef QUADRADO_H
#define QUADRADO_H

#include "Figura.h"

class Quadrado: public Figura {
	public:
		Quadrado (float x, float y, float lado);
		void draw();
	private:
		float lado;
};

#endif
