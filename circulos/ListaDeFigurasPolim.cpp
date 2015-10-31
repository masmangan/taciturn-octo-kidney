#include "ListaDeFigurasPolim.h"

#include <iostream>



using namespace std;

ListaDeFigurasPolim::ListaDeFigurasPolim() {
	//total = 0;
}

void ListaDeFigurasPolim::add(Figura *f) {
	//if(total == MAX) return;
	//figuras[total++] = f;
	figuras.push_back(f);
}

void ListaDeFigurasPolim::drawAll() {

	for(int i=0; i < figuras.size(); ++i)
		figuras[i]->draw();
}

// http://www.opengl-tutorial.org/beginners-tutorials/tutorial-6-keyboard-and-mouse/
void ListaDeFigurasPolim::acertou(int x, int y) {





//
std::vector<Figura*>::iterator iter;
            for ( iter = figuras.begin(); iter != figuras.end(); iter++ ) {
		cout << (*iter) << endl;
		cout << x << ", " << y << endl;
                if ( (*iter)->acertou(x, y) == true) {
                    // FIXME: seg fault ao remover o último!
                    figuras.erase(iter);
                    // FIXME: remove apenas um único círculo (gambiarra...)
                    break;
                }
            }		

	
}