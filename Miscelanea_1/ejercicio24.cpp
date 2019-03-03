/*
*guillermo cala; jan/ 05/ 19... mod 3/ march/ 19
*elaborar un algoritmo que gestione los datos de stock de una tienda de comestibles, la información a recoger será: nombre del producto, precio, cantidad en *stock. La tienda dispone de 10 productos distintos. El programa debe ser capaz de:
*- Dar de alta un producto nuevo.
*- Buscar un producto por su nombre.
*- Modificar el stock y precio de un producto dado.
*/
#include <iostream>
#include "string.h"
using namespace std;

struct producto
{
	string nombre;
	int precio;
	int cantidad;
} productos[11];
int menu();
void ImprimeList();
void IngresaProd();
int cont = -1;

int main()
{

	int sw = 1;
	do
	{
		switch (menu())
		{
			case 1:
				system("clear");
				IngresaProd();
				break;
			case 2:
				system("clear");
				break;
			case 3:
				system("clear");
				break;
			case 4:
				system("clear");
				ImprimeList();
				cin.get();
				break;
			case 5:
				system("clear");
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
	cout << "\t####   5- Eliminar Producto                ####" << endl;
	cout << "\t###############################################" << endl;
	cout << "\t####   0- Salir del programa               ####" << endl;
	cout << "\t###############################################" << endl;
	int opcion, sw = 1;
	do
	{
		cout << "ingrese una opcion: ";
		cin >> opcion;
		if(opcion >= 0 && opcion <= 5)
		{
			if(opcion == 1)
			{
				cont++;
			}
			sw = 0;
		}
		else
		{
			cout << "Debe ingresar un numero del 0 al 5..." << endl;
		}
	}while(sw != 0);
	return opcion;
}
void IngresaProd()
{
	int i = 0;
	for(i += cont; i < 10; i++)
	{
		cout << "Ingrese el nombre: ";
		cin >> productos[i].nombre;
		cout << "Ingrese el precio: ";
		cin >> productos[i].precio;
		cout << "Ingrese la cantidad en stock: ";
		cin >> productos[i].cantidad;
		break;
	}
}
void ImprimeList()
{
	for(int i = 0; i < 10; i++)
	{
		cout << "\tPRODUCTO N-" << i + 1 << endl;
		cout << "Nombre: " << productos[i].nombre << endl;
		cout << "Precio: " << productos[i].precio << endl;
		cout << "cantidad en stock: " << productos[i].cantidad << endl;
	}
	cin.get();/*con esta pausa evitamos que se limpie pantalla antes de mostrar la info de este proc*/
}
