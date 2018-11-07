#include <iostream>
using namespace std;
	int sumtot, cod, vta, codact, sumven, pago;

int main(){
	sumtot = 0;
	cout << "ingrese el codigo del vendedor(digite cero para salir): ";
	cin >> cod;
	while(cod!=0){
		codact = cod;
		sumven = 0;
		while(cod == codact){
			sumven += vta;
			cout << "ingrese el codigo del vendedor(digite cero para salir): ";
			cin >> cod;
			cout << "ingrese la venta: ";
			cin >> vta;
		}
		pago = sumven*2.5/100;
		cout << "Al vendedor " << codact << " se le pagara " << pago << endl;
		sumtot += sumven;
	}
	cout << "Total en ventas " << sumtot << endl;
	system("pause");
	return 0;
}
