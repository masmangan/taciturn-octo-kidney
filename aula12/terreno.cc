// PUCRS/FACIN
// Laboratório de Programação I
// 2015-08-25
// marco.mangan@pucrs.br

/*
Crie uma classe denominada Terreno que representa as dimensões de um terreno retangular, ou seja, largura e comprimento. Depois, declare um vetor de 100 terrenos e faça as seguintes funções:

    Função que recebe o vetor e lista na tela os terrenos que são quadrados;
    Função que recebe o vetor e retorna o terreno com maior perímetro;
*/
#include <iostream>
using namespace std;

class Terreno {
private:
	float largura;
	float comprimento;
public:
	Terreno(float larg, float comp);
	float getPerimetro();
	bool isQuadrado();
};

Terreno::Terreno(float larg, float comp)
{
	largura = larg;
	comprimento = comp;
}

float Terreno::getPerimetro()
{
	return 2 * (largura + comprimento);
}

bool Terreno::isQuadrado()
{
	return largura == comprimento;
}


int main()
{
	Terreno t1(12, 25), t2(10, 10);

	cout << t1.getPerimetro() << endl;
	cout << t2.getPerimetro() << endl;

	cout << t1.isQuadrado() << endl;
	cout << t2.isQuadrado() << endl;

	return 0;
}











