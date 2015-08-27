// PUCRS/FACIN
// Laboratório de Programação I
// 2015-08-27
// marco.mangan@pucrs.br

#include <fstream>   	// para usar file streams (ifstream,ofstream)
#include <iostream>	// para usar cin,cout
#include <iomanip>	// para usar manipuladores (setw, right, ...)
#include <cstdlib>	// para usar srand(), rand() e exit()

using namespace std;


int main() { 		// Cria output file stream (ofstream)
	ofstream arqsaida;

	// Cria e abre arquivo
	arqsaida.open("teste.txt", ios::out);

	// Se houver erro, sai do programa
	if (!arqsaida.is_open()) {
		cerr << "Falha ao abrir arquivo!" << endl;
		return 1;
	}

	cout << "Arquivo aberto!" << endl;
//
	// Gera a semente aleatória
	srand(time(0));

	cout << "Gerando dados..." << endl;
	// Agora grava os 10000 registros numéricos
	for(int i = 0 ; i < 10000 ; i++) { // FIXME: voltar para 10000
		int num = rand() % 10000;
		arqsaida << setw(5) << i + 1 << setw(5) << num << endl;
		if (arqsaida.fail()) {
			cout << "Erro fatal!" << endl;
			//exit(1);
			// Aborta programa
			return 2;
		}
	}

	cout << "Fechando o arquivo..." << endl;
	arqsaida.close();

	return 0;
}

