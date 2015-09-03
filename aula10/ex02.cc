// PUCRS/FACIN
// marco.mangan@pucrs.br
// Reescrita do exercício de frações com classes.
#include <iostream>

using namespace std;

class Fracao {
public:
    // FIXME: tentar colocar atributos privados
    int numerador;
    int denominador;

    Fracao(int n, int d);
    Fracao multiplicar(Fracao a, Fracao b);
    void mostrar(Fracao a);
    Fracao somar(Fracao a, Fracao b);
    Fracao simplificar(Fracao f);
};

int main()
{
    Fracao f1(2, 1), f2(3, 1), p(0, 0), s(1, 1);

    f1.mostrar(f1);
    f2.mostrar(f2);

    p = f1.multiplicar(f1, f2);

    p.mostrar(p);

    s = f1.somar(f1, f2);

    s.mostrar(s);

    return 0;
}

Fracao::Fracao(int n, int d)
{
    cout << "Fracao::Fracao" << endl;
    numerador = n;
    denominador = d;
}

Fracao Fracao::multiplicar(Fracao a, Fracao b)
{
    int n = a.numerador * b.numerador;
    int d = a.denominador * b.denominador;
    Fracao res(n, d); 

    res.mostrar(res);
    return res.simplificar(res);
}

Fracao Fracao::somar(Fracao a, Fracao b)
{
    int d = a.denominador * b.denominador;
    int n = d/a.denominador * a.numerador
                    + d/b.denominador * b.numerador;
    Fracao res(n, d);

    res.mostrar(res);
    return res.simplificar(res);
}


Fracao Fracao::simplificar(Fracao f)
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

void Fracao::mostrar(Fracao a)
{
    cout <<  a.numerador
         <<  " / "
         <<  a.denominador
         <<  endl;
}












