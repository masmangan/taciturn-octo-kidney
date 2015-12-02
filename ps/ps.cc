#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Pessoa {
public:
    Pessoa();
    Pessoa(string, string);
    void setCpf(string);
    void setTelefone(string);
    string getCpf();
    string getTelefone();
private:
    string cpf, telefone;
};

class Crianca {
public:
    Crianca();
    Crianca(string, int, Pessoa);
    void setNome(string);
    void setIdade(int);
    void setPais(Pessoa);
    string getNome();
    int getIdade();
    Pessoa getPais();
private:
    string nome;
    int idade;
    Pessoa pais;
};

class Escola {
public:
    Escola();
    bool adiciona(Crianca);
    Crianca retornaCrianca(string);
    vector<Crianca> buscaFilhos(string);
private:
    vector<Crianca> escola;
};

// Implementação disponível
// Assumindo que as classes Pessoa e Criança já foram implementadas...

Pessoa::Pessoa() {
    cpf = "INDEFINIDO";
    telefone = "INDEFINIDO";
}

Pessoa::Pessoa(string c, string t) {
    cpf = c;
    telefone = t;
}
void Pessoa::setCpf(string c) {
    cpf = c;
}
void Pessoa::setTelefone(string t) {
    telefone = t;
}
string Pessoa::getCpf() {
    return cpf;
}
string Pessoa::getTelefone() {
    return telefone;
}


Crianca::Crianca() {
    nome = "INDEFINIDO";
    idade = -1;
    pais = Pessoa();
}
Crianca::Crianca(string n, int i, Pessoa p) {
    nome = n;
    idade = i;
    pais = p;

}
void Crianca::setNome(string n) {
    nome = n;
}
void Crianca::setIdade(int i) {
    idade = i;
}
void Crianca::setPais(Pessoa p) {
    pais = p;
}
string Crianca::getNome() {
    return nome;
}
int Crianca::getIdade() {
    return idade;
}
Pessoa Crianca::getPais() {
    return pais;
}


// Implementação solicitada

// Questão 1
//

// 1,5 pt
Escola::Escola() {
}

bool Escola::adiciona(Crianca c) {
    escola.push_back(c);
    return true;
}

// 2,0 pt
Crianca Escola::retornaCrianca(string n) {
    for(int i = 0 ; i < escola.size() ; i++) {
        if (escola[i].getNome() == n) {
            return escola[i];
        }
    }
    return Crianca();
}

// 2,5 pt
vector<Crianca> Escola::buscaFilhos(string c) {
    vector<Crianca> r;
    for(int i = 0 ; i < escola.size() ; i++) {
        if (escola[i].getPais().getCpf() == c) {
            r.push_back(escola[i]);
        }
    }
    return r;

}

// Questão 2
//

int main() {
// 0,5 pt
    Escola e;

    string nome;
    int idade;
    string cpf;
    string telefone;

    cin >> nome;
    cin >> idade;
    cin >> cpf;
    cin >> telefone;

    Pessoa p = Pessoa(cpf, telefone);
    Crianca c = Crianca(nome, idade, p);
    e.adiciona(c);

// 1,5 pt
    vector<Crianca> cs = e.buscaFilhos(cpf);
    for(int i ; i < cs.size() ; i++)
        cout << cs[i].getNome() << endl;

}
