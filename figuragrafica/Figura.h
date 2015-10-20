#ifndef FIGURA_H
#define FIGURA_H

class Figura {
	public:
		Figura (float x, float y);

		// draw() é virtual puro, pois a classe
		// Figura é base para as demais

		virtual void draw() = 0;
	protected:
		float x,y;
};

#endif
