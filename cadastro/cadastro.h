#include <string>
#include <vector>
#include "cliente.h"

class cadastro {

private:
    vector<cliente> clientes;

public:
    cadastro(string);
    cliente localizar(string);

};
