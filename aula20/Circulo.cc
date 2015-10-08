// Circulo.cc
#include "Circulo.h"
#include <cmath>

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

//int Circulo::getX() {
//    return x;
//}

//int Circulo::getY() {
//    return y;
//}

bool Circulo::acertou(int tx, int ty) {
    float d = sqrt(pow(x - tx, 2.0) + pow(y - ty, 2.0));   

    if (d <= raio)
        return true;
    else
        return false;

}

std::ostream& operator<<(std::ostream& s, const Circulo& c) {

    s << "X=" << c.x;
    s << " Y=" << c.y;
    s << " R=" << c.raio;
    s << " C=" << c.cor;

    return s;
}







