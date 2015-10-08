// Circulo.h
#include <iostream>
class Circulo {

   friend std::ostream& operator<<(std::ostream&, const Circulo&);

private:
	int x; // 0..1024
	int y; // 0..768
	int raio;
	int cor; // 0 - vermelho, 1 - verde, 2 - azul
public:
	Circulo(int px, int py, int praio, int pcor);
	Circulo();
	//int getX();
	//int getY();
	//int getRaio();
	//int getCor();
	//void setX(int px);
	//void setY(int py);
	//void setRaio(int praio);
	//void setCor(int pcor);
};

