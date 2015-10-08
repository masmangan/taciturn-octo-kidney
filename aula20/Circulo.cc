// Circulo.cc
#include "Circulo.h"

Circulo::Circulo(int px, int py, int praio, int pcor) {
    x = px;
    y = py;
    raio = praio;
    cor = pcor;
}

Circulo::Circulo() {
    x = 0;
    y = 0;
    raio = 1;
    cor = 0;
}

int Circulo::getX() {
    return x;
}

int Circulo::getY() {
    return y;
}

std::ostream& operator<<(std::ostream& s, const Circulo& c) {

    s << "X=" << c.x;
    s << " Y=" << c.y;
    s << " R=" << c.raio;
    s << " C=" << c.cor;

    return s;
}







