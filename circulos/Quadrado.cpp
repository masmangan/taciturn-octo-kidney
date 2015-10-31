#include "Quadrado.h"
#include "GL.h"
#include <iostream>

using namespace std;

Quadrado::Quadrado (float x, float y, float lado): Figura(x,y) {
	this->lado = lado;
}

void Quadrado::draw() {
	cout << "Quadrado: " << x << "," << y << " - " << lado << endl;
	float lado2 = lado/2;
	GL::setColor(255,0,0);
	GL::fillRect(x-lado2,y-lado2,
		     x+lado2,y+lado2);
	GL::setColor(0,0,0);
	GL::drawRect(x-lado2,y-lado2,
		     x+lado2,y+lado2);
}

bool Quadrado::acertou(int tx, int ty) {
    // FIXME:
        return false;

}