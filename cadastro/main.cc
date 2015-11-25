// g++ cadastro.cc cliente.cc main.cc
#include <iostream>
#include "cadastro.h"

using namespace std;

int main() {
    cadastro cc("clientes.txt");
    cliente c;
    cout << "Cadastro" << endl;

    string e, s;

    cout << "Informe email: ";
    cin >> e;

    cout << "Informe senha: ";
    cin >> s;

    c = cc.localizar(e);

    if (c.getEmail() == "INDEFINIDO") {
        cout << "Usuário não encontrado!"<< endl;
    } else if (c.verifica(s)) {
        cout << "Acesso liberado!" << endl;
    } else {
        cout << "Acesso negado!" << endl;
    }
    return 0;
}
