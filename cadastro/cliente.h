#include <ostream>
#include <string>

using namespace std;

class cliente {

    friend ostream& operator<<(ostream &s, cliente &c);

private:
    string email;
    string senha;

public:
    cliente(string, string);
    cliente();
    bool verifica(string);
    string getEmail();
};

