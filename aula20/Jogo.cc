// Jogo.cc
#include <iostream>
#include <cmath>
#include "Circulo.h"

using namespace std;

int main() {
    Circulo c1;
    int x, y;
    float d;

    cout << "Jogo dos Círculos." << endl;

    cout << "Círculo:";
    cout << c1 << endl;

    cout << "Informe x e y:";
    cin >> x >> y;

    d = sqrt(pow(c1.getX() - x, 2.0) + pow(c1.getY() - y, 2.0));   

    cout << "D=" << d << endl;

    cout << "*FIM*" << endl;
}
