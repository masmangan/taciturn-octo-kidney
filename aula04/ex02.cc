// PUCRS/FACIN Programação para Engenharia II 2015/2
// marco.mangan@pucrs.br

#include <iostream>

using namespace std;

int main()
{
    cout << "Maior de Tres" << endl;
    cout << "=============" << endl << endl;

    float a, b, c;

    cout << "Informe tres valores:" << endl;
    cin >> a >> b >> c;
 
    if (a >= b && a >= c)
        cout << a;
    else if (b >= a && b >= c)
        cout << b;
    else
        cout << c;

    cout << endl;

    return 0;
}
