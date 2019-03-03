/*
*guillermo cala; jan/ 05/ 19
*elaborar un algoritmo que gestione los datos de stock de una tienda de comestibles, la información a recoger será: nombre del producto, precio, cantidad en *stock. La tienda dispone de 10 productos distintos. El programa debe ser capaz de:
*- Dar de alta un producto nuevo.
*- Buscar un producto por su nombre.
*- Modificar el stock y precio de un producto dado.
*/
#include <iostream>
#include "string"
using namespace std;

struct producto
{
	string nombre;
	int precio;
	int cantidad;
} productos[10];
void menu();

int main()
{
	menu();




	cin.get();
	return 0;
}
void menu()
{
	system("clear");
	cout << "\t###############################################" << endl;
	cout << "\t####                 TIENDA                ####" << endl;
	cout << "\t###############################################" << endl;
	cout << "\t###############################################" << endl;
	cout << "\t####   1- Anadir un producto               ####" << endl;
	cout << "\t###############################################" << endl;
	cout << "\t####   2- Buscar un producto(nombre)       ####" << endl;
	cout << "\t###############################################" << endl;
	cout << "\t####   3- Modificar el producto            ####" << endl;
	cout << "\t###############################################" << endl;
	int opcion, sw = 1;
	do
	{
		cout << "ingrese una opcion: ";
		cin >> opcion;
		if (opcion >= 1 && opcion <= 3)
		{
			sw = 0;
		}
		else
		{
			cout << "Debe ingresar un numero del 1 al 3..." << endl;
		}
	}while(sw != 0);
}
