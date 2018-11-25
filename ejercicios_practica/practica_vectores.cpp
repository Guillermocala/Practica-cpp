/*Guillermo Cala --nov /11 /18
escribir un programa que reciba n nombres y diga cuales de estos tiene vocales y cuantas tiene
=======================ANALISIS=======================
salida: nombres con el respectivo numero de vocales(si tiene)
proceso: almacenar los nombres en el array 
		 recorrer cada nombre y evaluar si tiene vocales
		 imprimir el nombre con la cantidad de vocales que tiene(si tiene)
entradas: numero de nombres
		  nombres
*/
#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
	string nombres[20];
	int numDatos;
	cout << "Ingrese la cantidad de nombres que va a digitar(maximo 20): ";
	cin >> numDatos;
	for (int i=0; i < numDatos; i++)
	{
		cout << "Ingrese el nombre -" << i + 1 << " : "; 
		cin >> nombres[i];
	}
		
	system ("pause");
	return 0;
}
