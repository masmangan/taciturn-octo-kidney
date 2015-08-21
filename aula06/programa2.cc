// marco.mangan@pucrs.br

// $g++ programa2.cc fracao.cc -o p2

#include <iostream>
#include "fracao.h"

using namespace std;

// programa.cc
int main()
{
    Fracao f;

    f.numerador = 20;
    f.denominador = 10;

    mostrar(f);

    return 0;
}


