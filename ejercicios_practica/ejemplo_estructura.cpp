/*
*guillermo cala; jan/ 20 / 19
*Data structures
*/
#include <iostream>
#include <string>
using namespace std;

struct persona
{
	string nombre;
	int edad;
	float altura;
} primero[10];
int main()
{
	int CPersonas;
	cout << "\tUSANDO ESTRUCTURAS" << endl;
	cout << "ingrese el numero de personas que va a almacenar(maximo 10): ";
	cin >> CPersonas;
	for (int i = 0; i < CPersonas; i++)
	{
		cout << "Persona #" << i + 1 << endl;
		cout << "ingrese su nombre: ";
		cin >> primero[i].nombre;
		cout << "ingrese su edad: ";
		cin >> primero[i].edad;
		cout << "ingrese su altura: ";
		cin >> primero[i].altura;
	}
	cout << "la informacion redactada es la siguiente..." << endl;
	for (int i = 0; i < CPersonas; i++)
	{
		cout << "Persona #" << i + 1 << endl;
		cout << primero[i].nombre << " tiene " << primero[i].edad << " anios y su altura es: " << primero[i].altura << endl;
	}
	system("pause");
	return 0;
}