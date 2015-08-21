#include <iostream>
#include "fracao.h"

using namespace std;

// fracao.cc
Fracao simplificar(Fracao f);

Fracao multiplicar(Fracao a, Fracao b)
{
    Fracao res; // FIXME: verificar alocação automática

    res.numerador = a.numerador * b.numerador;
    res.denominador = a.denominador * b.denominador;

    mostrar(res);
    return simplificar(res);
}

//TODO: completar
Fracao somar(Fracao a, Fracao b)
{
    Fracao res; // FIXME: verificar alocação automática

    res.numerador = res.denominador/a.denominador * a.numerador
                    + res.denominador/b.denominador * b.numerador;
    res.denominador = a.denominador * b.denominador;

    mostrar(res);
    return simplificar(res);
}


Fracao simplificar(Fracao f)
{
    // a=>numerador
    // b=>denominador
    // enquanto b for diferente de zero:
    //   tmp = a
    //   a = b
    //   b = tmp % b
    int a = f.numerador;
    int b = f.denominador;
    while(b != 0)
    {
        int tmp = a;
        a = b;
        b = tmp % b;
    }
    // MDC esta' no a
    f.denominador = f.denominador / a;
    f.numerador   = f.numerador   / a;
    return f;
}

void mostrar(Fracao a)
{
    cout <<  a.numerador
         <<  " / "
         <<  a.denominador
         <<  endl;
}












