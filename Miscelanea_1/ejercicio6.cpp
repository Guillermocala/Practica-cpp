/*
*Guillermo Cala; nov/ 27/ 2018
*elabore un algoritmo que lea 10 números por teclado, los almacene en un array y muestre la suma, resta, multiplicación y división de todos.
*/
#include <iostream>
using namespace std;

int main ()
{
	const int Cantidad = 10;
	int Numeros[Cantidad];
	int Suma = 0, Resta = 0, Multiplicacion = 1;
	float Division = 1;
	cout << "Suma, resta, multiplicacion y division de 10 datos enteros" << endl;
	for (int i = 0; i < Cantidad; i++)
	{
		cout << "Ingrese el valor #" << i + 1 << " : ";
		cin >> Numeros[i];
	}
	for (int j = 0; j < Cantidad; j++)
	{
		Suma = Numeros[j] + Suma;
		Resta = Numeros[j] - Resta;
		Multiplicacion = Numeros[j] * Multiplicacion;
		Division = Numeros[j] / Division;		
	}
	cout << "- La suma de los valores es: " << Suma <<endl;
	cout << "- La resta de los valores es: " << Resta <<endl;
	cout << "- La multiplicacion de los valores es: " << Multiplicacion <<endl;
	cout << "- La division de los valores es: " << Division <<endl;	
	system ("pause");
	return 0;
}
