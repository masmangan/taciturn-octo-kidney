#include <iostream>
#include <queue>

using namespace std;

main()
{
    queue<string> q;
    q.push("Melancia");
    q.push("Banana");
    q.push("Maçã");

    // Escreve Melancia, Banana, Maçã
    while( ! q.empty() ) {
        cout << q.front() << endl;
        q.pop();
    }
}


