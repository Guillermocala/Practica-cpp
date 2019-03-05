/*
*guillermo cala; march/ 04/ 19
*elaborar un algoritmo que gestiona las nota de una clase de 20 alumnos(ni por el putas voy a hacer pruebas para 20, lo reduzco a 10) de los cuales sabemos el nombre y la nota. El programa debe ser capaz de:
*- Buscar un alumno.
*- Modificar su nota.
*- Realizar la media de todas las nota.
*- Realizar la media de las nota menores de 5.
*- Mostrar el alumno que mejores nota ha sacado.
*- Mostrar el alumno que peores nota ha sacado.
*/
#include "iostream"
#include "string"
using namespace std;
struct Estudiante{
   string nombre;
   int nota;
} alum[10];

int menu();
void IngresaEst();
void BuscarEst();
void EditEst();
void ImprimeEst();
void ElimEst();
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
				BuscarEst();
				cin.get();
				break;
			case 3:
				system("clear");
				cout << "\tMODIFICAR DATOS DE ALUMNO" << endl;
            EditEst();
				cin.get();
	         break;
         case 4:
            system("clear");
            cout << "\tLISTA DE ESTUDIANTES" << endl;
            ImprimeEst();
            cin.get();
            break;
         case 5:
				system("clear");
				cout << "\tMEDIA DE TODAS LAS NOTAS" << endl;
				cin.get();
				break;
			case 6:
				system("clear");
				cout << "\tMEDIA DE NOTAS < 5" << endl;
				break;
			case 7:
				system("clear");
				cout << "\tMEJOR ALUMNO" << endl;
				cin.get();
				break;
			case 8:
				system("clear");
				cout << "\tPEOR ALUMNO" << endl;
				cin.get();
				break;
			case 9:
				system("clear");
				cout << "\tELIMINAR ALUMNO(VACIAR SUS CAMPOS)" << endl;
            ElimEst();
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
   cout << "\t####   4- Listado de estudiantes                     ####" << endl;
   cout << "\t#########################################################" << endl;
	cout << "\t####   5- Media de todas las notas                   ####" << endl;
	cout << "\t#########################################################" << endl;
	cout << "\t####   6- Media de las notas menores que 5           ####" << endl;
	cout << "\t#########################################################" << endl;
   cout << "\t####   7- Alumno con las mejores notas               ####" << endl;
   cout << "\t#########################################################" << endl;
   cout << "\t####   8- Alumno con las peores notas                ####" << endl;
   cout << "\t#########################################################" << endl;
   cout << "\t####   9- Eliminar un alumno                         ####" << endl;
   cout << "\t#########################################################" << endl;
	cout << "\t####   0- Salir del programa                         ####" << endl;
	cout << "\t#########################################################" << endl;
	int opcion, sw = 1;
	do
	{
		cout << "Ingrese una opcion: ";
		cin >> opcion;
		if(opcion >= 0 && opcion <= 9)
		{
			if(opcion == 1)
			{
				cont++;
			}
			sw = 0;
		}
		else
		{
			cout << "Debe ingresar un numero del 0 al 9..." << endl;
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
      cout << "Ingrese la nota: ";
      cin >> alum[i].nota;
		break;
	}
	if(cont >= 10)
	{
		cout << "No puede ingresar mas elementos. Solo 10!" << endl;
	}
}
void BuscarEst()
{
	string indice;
	cout << "Ingrese el nombre del estudiante a buscar: ";
	cin >> indice;
	for(int i = 0; i < 10; i++)
	{
		if(indice == alum[i].nombre)
		{
			cout << "Nota: " << alum[i].nota << endl;
			break;
		}
		else
		{
			cout << "No se encontro el estudiante..." << endl;
			break;
		}
	}
	cin.get();
}
void EditEst()
{
	int indice;
   char Confirm;
   cout << "El indice del estudiante se encuentra en el listado" << endl;
	cout << "Ingrese el indice del estudiante(numero): ";
	cin >> indice;
	indice -= 1;
	cout << "Desea cambiar el nombre?(Y/N): ";
   cin >> Confirm;
   if (Confirm == 'Y' || Confirm == 'y')
   {
      cout << "Ingrese el nuevo nombre: ";
      cin.ignore();
      getline (cin, alum[indice].nombre);
   }
   else
   {
      cout << "Ingrese la nueva nota: " << endl;
      cin >> alum[indice].nota;
   }
	cin.get();
}
void ImprimeEst()
{
	for(int i = 0; i < 10; i++)
	{
		cout << "\tESTUDIANTE N-" << i + 1 << endl;
		cout << "Nombre: " << alum[i].nombre << endl ;
		cout << "Nota: " << alum[i].nota << endl;
	}
	cin.get();/*con esta pausa evitamos que se limpie pantalla antes de mostrar la info de este proc*/
}
void ElimEst()
{
	int indice;
	cout << "El espacio del correspondiente producto quedara en blanco y para volver a usarlo debe usar la opcion 3(MODIFICAR)" << endl;
	cout << "Ingrese el indice del estudiante: ";
	cin >> indice;
	indice -= 1;
	alum[indice].nombre = "Unsigned";
	alum[indice].nota = 0;
}
