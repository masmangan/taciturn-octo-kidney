
#include <iostream>
#include "Venda.h"

using namespace std;

int main() {
	Venda v1("123", 12.99, 3), v2("456", 1.75, 10);

	cout << "Cod: " << v1.getCodigoProduto();
	cout << "R$ " << v1.getValorProduto() 
	cout << " x " << v1.getQuantidadeProduto() 
	cout << " = " << v1.getTotal() << endl;	

	cout << "Cod: " << v2.getCodigoProduto() << "R$ " << v2.getValorProduto() << " x " << v2.getQuantidadeProduto() << " = " << v2.getTotal() << endl;	

}
