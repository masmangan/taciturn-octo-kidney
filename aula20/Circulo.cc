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

std::ostream& operator<<(std::ostream& s, const Circulo& c) {

}







