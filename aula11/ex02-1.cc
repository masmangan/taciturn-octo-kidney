// PUCRS/FACIN
// marco.mangan@pucrs.br
// Reescrita do exercício de frações com classes.
//
// Contrutor em sobre carga
//
// Testes com operadores de fluxo
// http://arjuna.ist.utl.pt/TFCOM/Licoes/Programas/gnu_files/14/Sales_item.h
// http://arjuna.ist.utl.pt/TFCOM/Licoes/Programas/gnu_files/14/Sales_item.cc

#include <iostream>

using namespace std;

class Fracao {
    // A classe ostream e a classe Fracao podem compartilhar acesso.
    friend std::ostream& operator<<(std::ostream&, const Fracao&);

private:
    int numerador;
    int denominador;
    Fracao simplificar();

public:
    Fracao(int n, int d);
    Fracao();
    Fracao multiplicar(Fracao b);
    void mostrar();
    Fracao somar(Fracao b);

};

int main()
{
    Fracao f1(2, 1), f2(3, 1), p, s; // FIXME: novo construtor


    // O operador de fluxo de saída reconhece f1 como uma Fracao
    cout << f1 << endl;  

    f1.mostrar();
    f2.mostrar();


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

void Fracao::mostrar()
{
    cout <<  numerador
         <<  " / "
         <<  denominador
         <<  endl;
}

// Os atributos da Fracao sao inseridos no fluxo e o fluxo original é retornado
ostream& operator<<(ostream& s, const Fracao& f)
{
    s <<  f.numerador
         <<  " / "
         <<  f.denominador;
    return s;
}










