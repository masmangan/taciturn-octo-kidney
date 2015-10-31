#ifndef LISTA_FIGPOL_H
#define LISTA_FIGPOL_H

#include <vector>
#include "Figura.h"

class ListaDeFigurasPolim {
public:
    ListaDeFigurasPolim();
    void add(Figura *f);
    void drawAll();
    void acertou(int, int);
private:
    std::vector<Figura*> figuras;
};

#endif

