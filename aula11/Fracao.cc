#include <iostream>
#include "Fracao.h"

using namespace std;

Fracao::Fracao(int n, int d)
{
    numerador = n;
    denominador = d;
}

Fracao::Fracao()
{
    numerador = 1;
    denominador = 1;
}

Fracao Fracao::multiplicar(Fracao b)
{
    int n = numerador * b.numerador;
    int d = denominador * b.denominador;
    Fracao res(n, d); 

    return res.simplificar();
}

Fracao Fracao::somar(Fracao b)
{
    int d = denominador * b.denominador;
    int n = d / denominador * numerador
                    + d / b.denominador * b.numerador;
    Fracao res(n, d);

    return res.simplificar();
}


Fracao Fracao::simplificar()
{
    // a=>numerador
    // b=>denominador
    // enquanto b for diferente de zero:
    //   tmp = a
    //   a = b
    //   b = tmp % b
    int a = numerador;
    int b = denominador;
    Fracao f(a, b);
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

// Os atributos da Fracao sao inseridos no fluxo e o fluxo original é retornado
ostream& operator<<(ostream& s, const Fracao& f)
{
    s <<  f.numerador
         <<  " / "
         <<  f.denominador;
    return s;
}










