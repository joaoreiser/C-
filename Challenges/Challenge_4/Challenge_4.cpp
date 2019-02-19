#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main()
{
	const int um_real{100{;
	const int cinquenta_cents{50};
	const int vinte_cinco_cents{25};
	const int dez_cents{10};
	const int cinco_cents{5};
	
	int qta_um_real{};
	int qta_cinq_cents{};
	int qta_vinte_cinco_cents{};
	int qta_dez_cents{};
	int qta_cinco_cents{};
	int qta_um_cent{};
	
	int valor;
	
	cout << "Insert the value in cents: " << endl;
	cin >> valor;
	
	qta_um_real = valor / um_real;
	cout << "Valor: " << (valor%um_real) << endl;
	valor -= (qta_um_real * um_real);
	
	qta_cinq_cents = valor / cinquenta_cents;
	valor -= (qta_cinq_cents * cinquenta_cents);

	qta_vinte_cinco_cents = valor / vinte_cinco_cents;
	valor -= (qta_vinte_cinco_cents * vinte_cinco_cents);
	
	qta_dez_cents = valor / dez_cents;
	valor -= (qta_dez_cents * dez_cents);
	
	qta_cinco_cents = valor / cinco_cents;
	valor -= (qta_cinco_cents * cinco_cents);
	
	qta_um_cent = valor;
	
	cout << qta_um_real << " moedas de 1 real" << endl;
	cout << qta_cinq_cents << " moedas de 50 centavos" << endl;
	cout << qta_vinte_cinco_cents << " moedas de 25 centavos" << endl;
	cout << qta_dez_cents << " moedas de 10 centavos" << endl;
	cout << qta_cinco_cents << " moedas de 5 centavos" << endl;
	cout << qta_um_cent << " moedas de 1 centavo" << endl;

	return 0;
}