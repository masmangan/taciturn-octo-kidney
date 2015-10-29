#include <iostream>
#include <stack>

using namespace std;

main()
{
    stack<string> s;
    s.push("Melancia");
    s.push("Banana");
    s.push("Maçã");

    // Escreve Maçã, Banana, Melancia
    while( ! s.empty() ) {
        cout << s.top() << endl;
        s.pop();
    }
}

