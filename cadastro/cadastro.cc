#include "cadastro.h"
#include <fstream>

using namespace std;

cadastro::cadastro(string arquivo) {
    ifstream dados;
    string e;
    string s;

    dados.open(arquivo.c_str());

    while (!dados.eof()) {
        dados >> e;
        dados >> s;
        cliente c(e, s);
        clientes.push_back(c);
    }

    dados.close();
}

cliente cadastro::localizar(string e) {
    for(int i = 0 ; i != clientes.size() ; i++) {
        if (clientes[i].getEmail() == e) {
            return clientes[i];
        }
    }
    return cliente();
}
