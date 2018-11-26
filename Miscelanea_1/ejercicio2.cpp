/*elaborar un algoritmo que rellene un array con los 100 primeros números enteros y los muestre en pantalla en orden descendente.*/
#include <iostream>
using namespace std;

int main ()
{
	const int Indicador = 100;
	int Numeros[Indicador];
	for (int i = 1; i < Indicador; i++)
	{
		Numeros[i] = i;
	}
	for (int j = Indicador; j >= 1; j--)
	{
		cout << " " << Numeros[j];
	}
	cout << endl;
	system("pause");
	return 0;
}
