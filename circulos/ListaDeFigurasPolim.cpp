#include "ListaDeFigurasPolim.h"

#include <iostream>

using namespace std;

ListaDeFigurasPolim::ListaDeFigurasPolim() {
}

void ListaDeFigurasPolim::add(Figura *f) {
    figuras.push_back(f);
}

void ListaDeFigurasPolim::drawAll() {
    for(int i=0; i < figuras.size(); ++i)
        figuras[i]->draw();
}

void ListaDeFigurasPolim::acertou(int x, int y) {
//
    std::vector<Figura*>::iterator iter;
    iter = figuras.begin();
    while ( iter != figuras.end() ) {
        cout << (*iter) << endl;
        cout << x << ", " << y << endl;
        if ( (*iter)->acertou(x, y) == true) {
            iter = figuras.erase(iter);
        } else {
            iter++;
        }
    }


}
