// PUCRS/FACIN
// marco.mangan@pucrs.br
// Soma duas frações informadas pelo usuário.

#include <iostream>
#include "Fracao.h"

using namespace std;

int main()
{
    int n, d;

    cin >> n; 
    cin >> d;
    Fracao a(n, d);

// TODO:
// Fracao a;
// cin >> a;

    cin >> n;
    cin >> d;
    Fracao b(n, d);

    Fracao r = a.somar(b); 

    cout << r << endl;

    return 0;
}

