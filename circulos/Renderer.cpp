#include <iostream>
#include "Renderer.h"
#include "GL.h"
#include "ListaDeFigurasPolim.h"

using namespace std;

// Construtor recebe a lista, para que seja possível
// desenhar os objetos armazenados
Renderer::Renderer(ListaDeFigurasPolim* lista) {
	this->lista = lista;
}

// Este método deve desenhar os objetos, usando os métodos
// estáticos da classe GL
//
// Ele é chamado toda vez que a aplicação precisa redesenhar
// a tela gráfica. NÃO DEVE SER CHAMADO MANUALMENTE!
void Renderer::paint() {
	// Use os métodos da classe GL para desenhar os objetos da lista
	// Ou melhor, cada objeto deve ser capaz de se auto-desenhar
	// (implemente o método draw() em cada classe derivada de figura)
	//
	// Dica: basta pedir que a lista desenhe todos os objetos...
	
	cout << "Renderer::paint" << endl;

	// Testa os métodos de desenho: desenha o sistema de eixos

	// Cinza claro, para outras cores, veja exemplos em /etc/X11/rgb.txt
	GL::setColor(200,200,200);
	GL::drawLine(-10,0,10,0);
	GL::drawLine(0,-10,0,10);

	lista->drawAll();
	// Desenha um retângulo verde
	/*
	GL::setColor(0,200,0);		// verde claro
	GL::drawRect(-3,-3,3,3);

	// Desenha um círculo vermelho
	GL::setColor(200,0,0);		// vermelho claro
	GL::drawCirc(5,5,3);
*/
}

//
// Trata eventos de teclado: se uma tecla qualquer for pressionada
// durante a execução do programa, este méodo recebe o seu código
// ASCII na variável key, mais as coordenadas atuais do mouse em x,y
//
// Obs: não trata teclas especiais (F1, setas, etc)
void Renderer::keyboard(unsigned char key, int x, int y) {
	cout << "Renderer::keyboard: " << key << endl;
}

//
void Renderer::mouse(int button, int state, int x, int y) {
	if (button == 0 && state == 0) {
		cout << "Renderer::mouse " << x << ", " << y << endl;
		lista->acertou(x, y);
	}

}	


