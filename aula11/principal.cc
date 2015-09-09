// PUCRS/FACIN
// marco.mangan@pucrs.br
// Reescrita do exercício de frações com classes.

#include <iostream>
#include "Fracao.h"

using namespace std;

int main()
{
    Fracao f1(2, 1), f2(3, 1), p, s; 

    cout << f1 << endl;  
    cout << f2 << endl;  

    p = f1.multiplicar(f2); // TODO: f1 * f2
    cout << p << endl;

    s = f1.somar(f2); // TODO: f1 + f2
    cout << s << endl;

    return 0;
}

