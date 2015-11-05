
/*

Escrever um programa que leia uma sequência indeterminada de valores inteiros de um arquivo e manipule a pilha da seguinte forma:

    Caso o valor lido seja positivo então ele deve ser incluído na pilha
    Caso ele seja negativo então o valor no topo da pilha deve ser removido desta
    O valor 0 (zero) marca o fim do arquivo
    No final, exibir o conteúdo da pilha

*/
#include <iostream>
#include <fstream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    ifstream input;

    cout << "Exercício 1" << endl;
    input.open("dados1.txt");     // abrir arquivo

    int x;      
    while (1) {
        input >> x;     //   ler numero
        if (x == 0)
            break;
        else if ( x > 0)
            s.push(x);      //   incluir numero na pilha
        else if ( ! s.empty() )
            s.pop();
    }
    input.close();      // fechar arquivo

    // enquanto a pilha nao estiver vazia
    while ( ! s.empty() ) { 
        int v = s.top();     //   desempilhar numero
        s.pop();
        cout << v << endl;   //   mostrar numero
    }
    
    cout << "FIM" << endl;
}

