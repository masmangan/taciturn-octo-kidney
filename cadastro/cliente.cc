#include "cliente.h"
#include <string.h>
#include <ostream>

using namespace std;

ostream& operator<<(std::ostream &s, cliente &c) {
    s << "email=" << c.email;
    return s;
}

cliente::cliente() {
    email = "INDEFINIDO";
    senha = "INDEFINIDA";
}

cliente::cliente(string e, string s) {
    email = e;
    senha = s;
}

bool cliente::verifica(string s) {
    return s == senha;
}

string cliente::getEmail() {
    return email;
}
