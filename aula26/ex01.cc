/*
Escrever um programa que leia 10 números de um arquivo texto e crie uma pilha com eles. No final, desempilhar e exibir todos.
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
    input.open("dados.txt");     // abrir arquivo

    // repetir 10 vezes
    for ( int i = 0 ; i < 10 ; i ++ )     
    {
        int x;      
        input >> x;     //   ler numero
        s.push(x);      //   incluir numero na pilha
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

