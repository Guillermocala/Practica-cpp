/*
*guillermo cala; march/ 04/ 19
*elaborar un algoritmo que gestiona las notas de una clase de 20 alumnos(ni por el putas voy a hacer pruebas para 20, lo reduzco a 10) de los cuales sabemos el nombre y la nota. El programa debe ser capaz de:
*- Buscar un alumno.
*- Modificar su nota.
*- Realizar la media de todas las notas.
*- Realizar la media de las notas menores de 5.
*- Mostrar el alumno que mejores notas ha sacado.
*- Mostrar el alumno que peores notas ha sacado.
*/
#include "iostream"
#include "string"
using namespace std;
struct Estudiante{
   string nombre;
   int notas[10];
} alum[10];

int menu();
void IngresaEst();
void ImprimeList();
int cont = -1;

int main(int argc, char const *argv[])
{
	int sw = 1;
	do
	{
		switch (menu())
		{
			case 1:
				system("clear");
				cout << "\tANADIR ESTUDIANTE" << endl;
				IngresaEst();
				cin.get();
				break;
			case 2:
				system("clear");
				cout << "\tBUSCAR UN ALUMNO(NOMBRE)" << endl;
				void ImprimeList();
				cin.get();
				break;
			case 3:
				system("clear");
				cout << "\tMODIFICAR DATOS DE ALUMNO" << endl;
				cin.get();
				break;
			case 4:
				system("clear");
				cout << "\tMEDIA DE TODAS LAS NOTAS" << endl;
				cin.get();
				break;
			case 5:
				system("clear");
				cout << "\tMEDIA DE NOTAS < 5" << endl;
				break;
			case 6:
				system("clear");
				cout << "\tMEJOR ALUMNO" << endl;
				cin.get();
				break;
			case 7:
				system("clear");
				cout << "\tPEOR ALUMNO" << endl;
				cin.get();
				break;
			case 8:
				system("clear");
				cout << "\tELIMINAR ALUMNO(VACIAR SUS CAMPOS)" << endl;
				cin.get();
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
	cout << "\t#########################################################" << endl;
	cout << "\t####              ESCUELA X                          ####" << endl;
	cout << "\t#########################################################" << endl;
	cout << "\t#########################################################" << endl;
	cout << "\t####   1- Anadir un alumno                           ####" << endl;
	cout << "\t#########################################################" << endl;
	cout << "\t####   2- Buscar un alumno(nombre)                   ####" << endl;
	cout << "\t#########################################################" << endl;
	cout << "\t####   3- Modificar los datos de un alumno           ####" << endl;
	cout << "\t#########################################################" << endl;
	cout << "\t####   4- Media de todas las notas                   ####" << endl;
	cout << "\t#########################################################" << endl;
	cout << "\t####   5- Media de las notas menores que 5           ####" << endl;
	cout << "\t#########################################################" << endl;
   cout << "\t####   6- Alumno con las mejores notas               ####" << endl;
   cout << "\t#########################################################" << endl;
   cout << "\t####   7- Alumno con las peores notas                ####" << endl;
   cout << "\t#########################################################" << endl;
   cout << "\t####   8- Eliminar un alumno                         ####" << endl;
   cout << "\t#########################################################" << endl;
	cout << "\t####   0- Salir del programa                         ####" << endl;
	cout << "\t#########################################################" << endl;
	int opcion, sw = 1;
	do
	{
		cout << "Ingrese una opcion: ";
		cin >> opcion;
		if(opcion >= 0 && opcion <= 8)
		{
			if(opcion == 1)
			{
				cont++;
			}
			sw = 0;
		}
		else
		{
			cout << "Debe ingresar un numero del 0 al 8..." << endl;
		}
	}while(sw != 0);
	return opcion;
}
void IngresaEst()
{
	int i = 0;
	for(i += cont; i < 10; i++)/*aqui sumamos el cont con el indice del bucle para ingresar de forma consecutiva*/
	{
		cout << "Ingrese el nombre: ";
		cin.ignore();
		getline (cin, alum[i].nombre);
		break;
	}
	if(cont >= 10)
	{
		cout << "No puede ingresar mas elementos. Solo 10!" << endl;
	}
	cin.get();
}
void ImprimeList()
{
	for(int i = 0; i < 10; i++)
	{
		cout << "\tESTUDIANTE N-" << i + 1 << endl;
		cout << "Nombre: " << alum[i].nombre << endl ;
		cout << "notas: " << alum[i].notas << endl;
	}
	cin.get();/*con esta pausa evitamos que se limpie pantalla antes de mostrar la info de este proc*/
}
