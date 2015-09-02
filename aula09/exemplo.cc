
// PUCRS/FACIN
// marco.mangan@pucrs.br

#include <iostream>

using namespace std;

class Lampada {
private:
    bool ligada; // false (0) ou true (1)
    int tensao;
    int potencia;
public:	
    Lampada(int t, int p);
    void ligar();
    bool getLigada(); 
    int getTensao(); 
    int getPotencia();     
};

Lampada::Lampada(int t, int p)
{
    cout << "Lampada::Lampada" << endl;
    ligada = 0;
    tensao = t;
    potencia = p;
}

// Método ligar: altera o valor do atributo ligada para true
void Lampada::ligar()
{
    cout << "Lampada::ligar" << endl;
    ligada = true;
}

bool Lampada::getLigada()
{
    return ligada;
}

int Lampada::getTensao()
{
    return tensao;
}

int Lampada::getPotencia()
{
    return potencia;
}

int main()
{
    Lampada lamp1(127, 60), lamp2(220, 100);

    //ligar(lamp1);
    lamp1.ligar();

    cout << "Lâmpadas" << endl;
    cout << "lamp1: ligada=" << lamp1.getLigada() << endl;
    cout << "       tensao=" << lamp1.getTensao() << endl;

    cout << "lamp2: ligada=" << lamp2.getLigada() << endl;
    cout << "       tensao=" << lamp2.getTensao() << endl;
    return 0;
}









