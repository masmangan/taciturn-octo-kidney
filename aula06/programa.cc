// marco.mangan@pucrs.br

// $g++ programa.cc fracao.cc -o p1

#include <iostream>
#include "fracao.h"

using namespace std;

// programa.cc
int main()
{
    Fracao f1, f2, p, s;

    f1.numerador = 2;
    f1.denominador = 1;

    f2.numerador = 3;
    f2.denominador = 1;

    mostrar(f1);
    mostrar(f2);

    p = multiplicar(f1, f2);

    mostrar(p);

    s = somar(f1, f2);

    mostrar(s);

    return 0;
}


