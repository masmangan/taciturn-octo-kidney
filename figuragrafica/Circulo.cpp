#include "Circulo.h"
#include "GL.h"
#include <iostream>

using namespace std;

Circulo::Circulo (float x, float y, float raio): Figura(x,y) {
	this->raio = raio;
}

void Circulo::draw() {
	cout << "Circulo: " << x << "," << y << " - " << raio << endl;
	GL::setColor(0,0,255);
	GL::fillCirc(x,y,raio);
	GL::setColor(0,0,0);
	GL::drawCirc(x,y,raio);
}

