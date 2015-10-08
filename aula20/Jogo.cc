// Jogo.cc
#include <iostream>
#include "Circulo.h"

using namespace std;

int main() {
    Circulo c1;
    int x, y;
    bool acerto;

    cout << "Jogo dos Círculos." << endl;

    while (1) {
        cout << "Círculo:";
        cout << c1 << endl;

        cout << "Informe x e y:";
        cin >> x >> y;

        acerto = c1.acertou(x, y);
        cout << "R=" << acerto << endl;

        if (acerto == 1)
            break;
    }
    cout << "*FIM*" << endl;
}
