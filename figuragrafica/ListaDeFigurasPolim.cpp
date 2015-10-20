#include "ListaDeFigurasPolim.h"

ListaDeFigurasPolim::ListaDeFigurasPolim() {
	total = 0;
}

void ListaDeFigurasPolim::add(Figura *f) {
	if(total == MAX) return;
	figuras[total++] = f;
}

void ListaDeFigurasPolim::drawAll() {

	for(int i=0; i < total; ++i)
		figuras[i]->draw();
}

