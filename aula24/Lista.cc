// Exercício
#include <iostream>
#include <list>

using namespace std;

class Lista {
	friend ostream& operator<<(ostream& s, Lista& lst);
private:
	list<int> valores;
public:
	Lista();
	void add(int v);
	bool procura(int v);
};

Lista::Lista() {

}

void Lista::add(int v) {
	valores.push_back(v);
}

bool Lista::procura(int v) {
	list<int>::iterator iter;

	for( iter = valores.begin() ; iter != valores.end() ; iter++ )
	{
		if (*iter == v)
			return true;
	}

	return false;	
}


ostream& operator<<(ostream& s, Lista& lst) {
	list<int>::iterator iter;

	s << "[";
	iter = lst.valores.begin();
	if (iter != lst.valores.end() ) {
		s << *iter;
		iter++;
	}
	for(  ; iter != lst.valores.end() ; iter++ )
		s << ", " << *iter ;
	s << "]";

	return s;
}

int main() {
	Lista lst;

	cout << "Exercício sobre listas" << endl;

	cout << lst << endl;	
	lst.add(1);
	cout << lst << endl;	
	lst.add(2);
	cout << lst << endl;	

	cout << lst.procura(3) << endl;	
	cout << lst.procura(1) << endl;	

	
}









