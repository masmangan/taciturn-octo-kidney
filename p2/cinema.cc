#include <iostream>
#include<vector>

using namespace std;

class poltrona {
private:
	int fila, numero;
	int estado;
public:
	poltrona(int f, int n) {
		fila = f;
		numero = n;
		estado = 0;
	}

	int getFila() { return fila; }
	int getNumero() { return numero; }
	int getEstado() { return estado; }

	void reservar() { estado = 1; }
	void vender() { estado = 2; }
	void liberar() { estado = 0; }
};

class sala {
private:
	vector<poltrona> lista;
	string filme;
public:
	sala(string f);
	bool vender(int f, int n);
};

sala::sala(string f) {
	filme = f;
	for(int i = 1 ; i < 12 ; i++)
		for(int j = 1 ; j < 10 ; j++)
			lista.push_back(poltrona(i, j));
}

bool sala::vender(int f, int n) {
	for(int i = 0 ; i < lista.size() ; i++)
		if (lista[i].getFila() == f 
			&& lista[i].getNumero() == n 
			&& lista[i].getEstado() ==0) {
			lista[i].vender();
			return true;
		}
	return false;
}

int main() {
	sala s("Guerra nas Estrelas");
	int fila, numero;

	while(1) {

		cout << "Fila" << endl;
		cin >> fila;

		cout << "Numero" << endl;
		cin >> numero;

		bool ok = s.vender(fila, numero);
		
		if (ok) {
			cout << "Vendido";
		} else {
			cout << "Indisponível";
		cout << endl;
	}
}
	
