#include <iostream>
#include <string>

using namespace std;

class Veiculo {
	public:
		string cor;
		char *modelo;
		int anoFabricacao;
		double velocidade;

		Veiculo();
		void acelerar(double aumVel);
		void travar(double dimVel);
		double obterVelocidade();
};

Veiculo::Veiculo() {
}

void Veiculo::acelerar(double aumVel) {
    velocidade += aumVel;
}

void Veiculo::travar(double dimVel) {
	velocidade -= dimVel;
}

double Veiculo::obterVelocidade() {
    return velocidade;
}

int main (void)
{
	Veiculo *veiculo1 = new Veiculo();
	Veiculo veiculo2 = Veiculo();
    Veiculo *veiculo3 = &veiculo2;

	// (*veiculo1).cor = "Vermelha";
	veiculo1->cor = "Vermelha";
	veiculo2.anoFabricacao = 2007;
	veiculo3->anoFabricacao = 2017;

	veiculo1->acelerar(100.0);
	veiculo2.acelerar(50.0);

	veiculo1->travar(20.0);
    double v1 = veiculo1->obterVelocidade();
	cout << v1 << endl;
    cout << veiculo2.anoFabricacao << endl;
}