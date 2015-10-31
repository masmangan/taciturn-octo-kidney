#include <iostream>
#include <fstream>
#include "ListaDeFigurasPolim.h"
#include "Renderer.h"
#include "GL.h"

using namespace std;

int main() {

	// Cria a lista de objetos
	ListaDeFigurasPolim lista;

	lista.add(new Quadrado(0,0,5));
	lista.add(new Quadrado(3,3,2));
	lista.add(new Circulo(-4,-5,4.5));

	// Cria o objeto responsável pelo desenho (Renderer)
	// Ele recebe um ponteiro para a lista de objetos,
	// de forma que seja possível acessá-la lá.
	Renderer renderer(&lista);

	// Devido a como as coisas funcionam no Universo, agora é
	// preciso enviar um ponteiro para esse objeto ao método
	// GL::init - isso irá inicializar a biblioteca gráfica
	GL::init("Desenho de figuras",&renderer);

	// Aqui voce deve inserir o codigo-fonte para carregar o arquivo
	// "desenho.txt" do disco, instanciando os objetos correspondentes
	//
	// ou:
	//
	// Instancie diretamente os objetos desejados e insira cada um
	// na lista de objetos
	
	// Agora basta chamar o método GL::loop()
	// Nota: o programa NÃO retorna desse método, por isso você deve
	// garantir que o objeto "render" é capaz de desenhar os objetos
	GL::loop();	
}

