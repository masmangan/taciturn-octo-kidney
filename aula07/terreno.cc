// PUCRS/FACIN
// Laboratório de Programação I
// 2015-08-25
// marco.mangan@pucrs.br

/*
Crie uma struct denominada Terreno que representa as dimensões de um terreno retangular, ou seja, largura e comprimento. Depois, declare um vetor de 100 terrenos e faça as seguintes funções:

    Função que recebe o vetor e lista na tela os terrenos que são quadrados;
    Função que recebe o vetor e retorna o terreno com maior perímetro;
*/
#include <iostream>
using namespace std;

struct Terreno {
    float largura;
    float comprimento;
};

void quadrados(Terreno ts[5]);
Terreno perimetro(Terreno ts[5]);

void quadrados(Terreno ts[5]) {
    for(int i = 0 ; i < 5 ; i++) // deveria ser i < 100!
    {
        if (ts[i].largura == ts[i].comprimento)
        {
            cout << ts[i].largura << " " << ts[i].comprimento << endl;
        }
    }
}

Terreno perimetro(Terreno ts[5]) {
    int pos = 0;

    for(int i = 0 ; i < 5 ; i++) // deveria ser i < 100!
    {
        if (ts[i].largura + ts[i].comprimento > 
            ts[pos].largura + ts[pos].comprimento)
        {
            pos  = i;
        }
    }

    return ts[pos];
}

int main()
{
    Terreno t[5]; // FIXME: deveria criar 100 terrenos!

    // FIXME: informar via teclado ou gerar terrenos com dimensões aleatórias
    t[0].largura = 12;
    t[0].comprimento = 20;

    t[1].largura = 20;
    t[1].comprimento = 20;

    t[2].largura = 12;
    t[2].comprimento = 12;

    t[3].largura = 120;
    t[3].comprimento = 200;

    t[4].largura = 1;
    t[4].comprimento = 2;

    cout << "Terrenos!" << endl;

    for(int i = 0 ; i < 5 ; i++) // FIXME: deveria ser i < 100!
    {
        cout << t[i].largura << " " << t[i].comprimento << endl;
    }

    quadrados(t);

    Terreno maior = perimetro(t);
    cout << maior.largura << " " << maior.comprimento << endl;

    return 0;
}
















