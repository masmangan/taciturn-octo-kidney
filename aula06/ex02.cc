// marco.mangan@pucrs.br
#include <iostream>

using namespace std;

struct Fracao {
	int numerador; 
	int denominador;
};

Fracao multiplicar(Fracao a, Fracao b);
void mostrar(Fracao a);

int main()
{
	Fracao f1, f2, r;

	f1.numerador = 12;
	f1.denominador = 17;

	f2.numerador = 13;
	f2.denominador = 18;

	mostrar(f1);
	mostrar(f2);

	r = multiplicar(f1, f2);

	mostrar(r);

	return 0;
}

Fracao multiplicar(Fracao a, Fracao b)
{
	Fracao res; // FIXME: verificar alocação automática

	res.numerador = a.numerador * b.numerador;
	res.denominador = a.denominador * b.denominador;

	return res;
}

void mostrar(Fracao a)
{
	cout <<  a.numerador
	     <<  " / "
	     <<  a.denominador
	     <<  endl;
}












