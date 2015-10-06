#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    int h, m;
    ifstream arq;

    arq.open("aparelho.txt");
    //while (arq.good()) {
    //	arq >> n;
    //	if (arq.good()) {
    while (arq >> n) {
        h = n / 60;
        m = n % 60;

        cout << setfill('0') << setw(2) << h;
        cout << ":" << setfill('0') << setw(2) << m << endl;
        //	}
    }
    arq.close();
}
