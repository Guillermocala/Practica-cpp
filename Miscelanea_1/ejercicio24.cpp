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
int menu();
void ImprimeList();
void IngresaProd();

int main()
{
	int sw = 1;
	do
	{
		switch (menu())
		{
			case 1:
				IngresaProd();
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				ImprimeList();
				break;
			case 0:
				sw = 0;
				break;
		}
	}while(sw != 0);
	cin.get();
	return 0;
}
int menu()
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
	cout << "\t####   4- Mostrar listado de productos     ####" << endl;
	cout << "\t###############################################" << endl;
	cout << "\t####   0- Salir del programa               ####" << endl;
	cout << "\t###############################################" << endl;
	int opcion, sw = 1;
	do
	{
		cout << "ingrese una opcion: ";
		cin >> opcion;
		if (opcion >= 0 && opcion <= 4)
		{
			sw = 0;
		}
		else
		{
			cout << "Debe ingresar un numero del 0 al 4..." << endl;
		}
	}while(sw != 0);
	return opcion;
}
void IngresaProd()
{
	cout << "Ingrese el nombre: ";
	cin >> productos[0].nombre;
	cout << "Ingrese el precio: ";
	cin >> productos[0].precio;
	cout << "Ingrese la cantidad en stock: ";
	cin >> productos[0].cantidad;
}
void ImprimeList()
{
	cout << productos[0].nombre << endl;
	cout << productos[0].precio << endl;
	cout << productos[0].cantidad << endl;

}
