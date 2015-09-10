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
    friend std::ostream& operator<<(std::ostream&, const Terreno&);
private:
	float largura;
	float comprimento;
public:
	Terreno(float larg, float comp);
	Terreno();
	float getPerimetro();
	bool isQuadrado();
	void setLargura(float larg);
	void setComprimento(float comp);
	void redimensionar(float larg, float comp);
};

Terreno::Terreno(float larg, float comp)
{
	largura = larg;
	comprimento = comp;
}

Terreno::Terreno()
{
	largura = 1;
	comprimento = 1;
}


float Terreno::getPerimetro()
{
	return 2 * (largura + comprimento);
}

bool Terreno::isQuadrado()
{
	return largura == comprimento;
}

void Terreno::setLargura(float larg)
{
//	if (larg < 0)
//		throw runtime_exception("A largura deve ser positiva!");

	largura = larg;
}

void Terreno::setComprimento(float comp)
{
	comprimento = comp;
}


void Terreno::redimensionar(float larg, float comp)
{
	largura = larg;
	comprimento = comp;
}


int main()
{
	Terreno t1(12, 25), t2(10, 10), t3;
	Terreno t[5];

	t[0].redimensionar(12, 12);

	t[1].setLargura(120);
	t[1].setComprimento(120);

	t[2] = t1;

	t[3] = t2;

	t[4] = t3;

    cout << "Terrenos!" << endl;

    for(int i = 0 ; i < 5 ; i++) // FIXME: deveria ser i < 100!
    {
        cout << t[i] << endl;
    }

	cout << t1.getPerimetro() << endl;
	cout << t2.getPerimetro() << endl;

	cout << t1.isQuadrado() << endl;
	cout << t2.isQuadrado() << endl;

	return 0;
}











