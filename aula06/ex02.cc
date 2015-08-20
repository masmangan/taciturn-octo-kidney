// marco.mangan@pucrs.br
#include <iostream>

using namespace std;

struct Fracao {
    int numerador;
    int denominador;
};

Fracao multiplicar(Fracao a, Fracao b);
Fracao somar(Fracao a, Fracao b);
void mostrar(Fracao a);
Fracao simplificar(Fracao f);

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












