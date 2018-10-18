//crear un algoritmo que produzca una tabla de conversion de temperatura celsius a fahrenheit

#include <iostream>

using namespace std;

int main(){
	int grados_c;
	cout << "\tCONVERTIDOS GRADOS CELSIUS A FAHRENHEIT\npara salir ingrese 0" << endl;
	cout << "ingrese la cantidad de grados celsius: ";
	cin >> grados_c;
	while(grados_c != 0){
		float grados_f = (grados_c * 1.8 ) + 32;
		cout << "-" << grados_c << " grados celsius son: " << grados_f << " grados fahrenheit" << endl;
		cout << "ingrese la cantidad de grados celsius: ";
		cin >> grados_c;
	}
system("pause");
return 0;
}
