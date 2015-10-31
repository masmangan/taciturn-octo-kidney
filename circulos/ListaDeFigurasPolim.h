#ifndef LISTA_FIGPOL_H
#define LISTA_FIGPOL_H

#include <vector>

#include "Quadrado.h"
#include "Circulo.h"

#define MAX	100
class ListaDeFigurasPolim {
	public:
		ListaDeFigurasPolim();
		void add(Figura *f);
		void drawAll();
		void acertou(int, int);
	private:
		//int total;
		//Figura *figuras[MAX];
		std::vector<Figura*> figuras;
};

#endif

