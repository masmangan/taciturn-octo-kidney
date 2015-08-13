// PUCRS/FACIN Programação para Engenharia II 2015/2
// marco.mangan@pucrs.br

#include <iostream>

using namespace std;

int main()
{
    cout << "Conversao de temperaturas" << endl;
    cout << "=========================" << endl << endl;

    float c, f;

    cout << "Informe a temperatura em graus Celsius:" << endl;
    cin >> c;

    f = 9.0f/5.0f * c + 32.0f;

    cout << c << " graus Celsius correspondem a ";
    cout << f << " graus Fahrenheit." << endl;

    return 0;
}
