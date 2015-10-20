// Jogo.cc
// g++ Circulo.cc Jogo.cc -o Jogo
#include <iostream>
#include <vector>

#include "Circulo.h"

using namespace std;

int main() {
	vector<Circulo> cs; // declara um vetor de circulos
	vector<Circulo>::iterator iter; // declara um iterador para um vetor de circulos

    // insere 3 circulos no vetor
    cs.push_back( Circulo() );
    cs.push_back( Circulo(100, 150, 30, 1) );
    cs.push_back( Circulo(50, 70, 10, 2) );

    int x, y;
    //bool acerto;

    cout << "Jogo dos Círculos." << endl;

    while ( ! cs.empty() ) {
    
        cout << "Círculos:" << endl;
        for (int i = 0 ; i < cs.size() ; i++)
            cout << cs[i] << endl;

        cout << "Informe x e y:";
        cin >> x >> y;

 //       acerto = false;
//        for (int i = 0 ; i < cs.size() ; i++) {
//            if ( cs[i].acertou(x, y) ) {
//                //acerto = true;
//                cs.erase(cs.begin() + i);
//            }
//            cout << "C #" << i << endl;
//            cout << cs[i] << " A=" << acerto << endl;

            for ( iter = cs.begin(); iter != cs.end(); iter++ ) {
                if ( (*iter).acertou(x, y) == true) {
                    // FIXME: seg fault ao remover o último!
                    cs.erase(iter);
                    // FIXME: remove apenas um único círculo (gambiarra...)
                    break;
                }
            }

 
        //cout << "R=" << acerto << endl;

        //if (acerto == 1)
        //    break;

        for (int i = 0 ; i < cs.size() ; i++)
            cs[i].mover();
    }
    cout << "*FIM*" << endl;
}
