// PUCRS/FACIN
// marco.mangan@pucrs.br
// Reescrita do exercício de frações com classes.
#include <iostream>

using namespace std;

class Fracao {
private:
    int numerador;
    int denominador;
    Fracao simplificar();

public:
    Fracao(int n, int d);
    //Fracao();
    Fracao multiplicar(Fracao b);
    void mostrar();
    Fracao somar(Fracao b);

};

int main()
{
    Fracao f1(2, 1), f2(3, 1), p(0, 0), s(1, 1); // FIXME: novo construtor

    f1.mostrar();
    f2.mostrar();

    // cout << f1 << endl;  // FIXME: cin e cout com Fracao

    p = f1.multiplicar(f2);

    p.mostrar();

    s = f1.somar(f2);

    s.mostrar();

    return 0;
}

Fracao::Fracao(int n, int d)
{
    numerador = n;
    denominador = d;
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

void Fracao::mostrar()
{
    cout <<  numerador
         <<  " / "
         <<  denominador
         <<  endl;
}












