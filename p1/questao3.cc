
class Venda {
private:
	//...
	float valor_produto;
	int quantidade_produto;
public:
	//...
	float getTotal();
};

float Venda::getTotal() {
	float total = valor_produto * quantidade_produto;
	return total;
}
