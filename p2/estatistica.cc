#include <iostream>
#include <vector>

using namespace std;

class estatisticas {
	friend ostream& operator<<(ostream&, estatisticas&);
private:
	vector<float> vs;
public:
	void processar(float v);
};

ostream& operator<<(ostream& s, estatisticas& e) {
	int t = 0;
	s << "N=" << e.vs.size() << endl;
	s << "Dados ";
        for(int i = 0 ; i != e.vs.size() ; i++) {
               s << " " << e.vs[i];
	t += e.vs[i];	
	}
	s << endl;
	s << "Soma=" << t << endl;
	float m = 0;
	if (e.vs.size() != 0)
		m = t / e.vs.size();	
	s << "Media=" << m << endl;
	return s;
}

void estatisticas::processar(float v) {
	vs.push_back(v);
}

int main() {

	estatisticas e;

	float v;

	cout << "Estatísticas"<< endl;

	while (1) {
		cout << "Informe um valor (-1 para encerrar):";
		cin >> v;
		if (v == -1)
			break;
		e.processar(v);
	}

	cout << e << endl;
}
			
