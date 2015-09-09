#include <iostream>

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
    Fracao somar(Fracao b);

};

