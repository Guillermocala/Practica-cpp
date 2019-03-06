/*
*guillermo cala; jan/ 05/ 19... mod 3/ march/ 19... mod 5/ march/ 19
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
void IngresaProd();
void BuscarProd();
void EditProd();
void ElimProd();
void ImprimeList();
int cont = -1; /*este cont nos permite llevar orden para el ingreso de datos*/

int main()
{
	int sw = 1;
	do
	{
		switch (menu())
		{
			case 1:
				system("clear");
				cout << "\tANADIR PRODUCTO" << endl;
				IngresaProd();
				cin.get();
				break;
			case 2:
				system("clear");
				cout << "\tBUSCAR PRODUCTO POR NOMBRE" << endl;
				BuscarProd();
				break;
			case 3:
				system("clear");
				cout << "\tMODIFICAR PRODUCTO BUSCANDO POR INDICE" << endl;
				EditProd();
				cin.get();
				break;
			case 4:
				system("clear");
				cout << "\tLISTA DE PRODUCTOS EN FORMA CRECIENTE" << endl;
				ImprimeList();
				cin.get();
				break;
			case 5:
				system("clear");
				cout << "\tELIMINAR PRODUCTO(VACIAR SUS CAMPOS)" << endl;
				ElimProd();
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
		cout << "Ingrese una opcion: ";
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
	for(i += cont; i < 10; i++)/*aqui sumamos el cont con el indice del bucle para ingresar de forma consecutiva*/
	{
      /*esta func permite limpiar el bufer del flujo de datos, antes de la fun
      hay una salida y getline la recibe como salto de linea anulando la recepcion de datos*/
      cin.ignore();
		cout << "Ingrese el nombre: ";
		getline (cin, productos[i].nombre);
		cout << "Ingrese el precio: ";
		cin >> productos[i].precio;
		cout << "Ingrese la cantidad en stock: ";
		cin >> productos[i].cantidad;
		break;
	}
	if(cont >= 10)
	{
		cout << "No puede ingresar mas elementos. Solo 10!" << endl;
	}
	cin.get();
}
void BuscarProd()
{
	string indice;
   cin.ignore();
	cout << "Ingrese el nombre del producto a buscar: ";
	getline(cin, indice);
	for(int i = 0; i < 10; i++)
	{
		if(indice == productos[i].nombre)
		{
			cout << "Precio: " << productos[i].precio << endl;
			cout << "Cantidad en stock: " << productos[i].cantidad << endl;
			break;
		}
		else
		{
			cout << "No se encontro el elemento..." << endl;
			break;
		}
	}
	cin.get();
}
void EditProd()
{
	int indice;
	cout << "Ingrese el indice del producto: ";
	cin >> indice;
	indice -= 1;
	cout << "Nombre: " << productos[indice].nombre << endl ;
	cout << "Precio: " << productos[indice].precio << endl;
	cout << "Cantidad en stock: " << productos[indice].cantidad << endl;
	cout << "Ingrese los nuevos datos..." << endl;
   cin.ignore();
	cout << "Ingrese el nombre: ";
	getline (cin, productos[indice].nombre);
	cout << "Ingrese el precio: ";
	cin >> productos[indice].precio;
	cout << "Ingrese la cantidad en stock: ";
	cin >> productos[indice].cantidad;
	cin.get();
}
void ElimProd()
{
	int indice;
	cout << "El espacio del correspondiente producto quedara en blanco y para volver a usarlo debe usar la opcion 3(MODIFICAR)" << endl;
	cout << "Ingrese el indice del producto: ";
	cin >> indice;
	indice -= 1;
	productos[indice].nombre = "Unsigned";
	productos[indice].precio = 0;
	productos[indice].cantidad = 0;
}
void ImprimeList()
{
	for(int i = 0; i < 10; i++)
	{
		cout << "\tPRODUCTO N-" << i + 1 << endl;
		cout << "Nombre: " << productos[i].nombre << endl ;
		cout << "Precio: " << productos[i].precio << endl;
		cout << "Cantidad en stock: " << productos[i].cantidad << endl;
	}
	cin.get();/*con esta pausa evitamos que se limpie pantalla antes de mostrar la info de este proc*/
}
