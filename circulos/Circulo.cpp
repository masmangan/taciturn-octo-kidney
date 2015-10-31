#include "Circulo.h"
#include "GL.h"
#include <cmath>

using namespace std;

Circulo::Circulo (float x, float y, float raio) : Figura(x,y) {
    this->raio = raio;
}

void Circulo::draw() {
    GL::setColor(0, 0,  255);
    GL::fillCirc(x, y, raio);
    GL::setColor(0, 0, 0);
    GL::drawCirc(x, y, raio);
}

bool Circulo::acertou(int tx, int ty) {
    float d = sqrt(pow(x - tx, 2.0) + pow(y - ty, 2.0));

    return d <= raio;
}