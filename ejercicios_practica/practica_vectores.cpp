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
using namespace std;
void LeerArray (string vector[20], int CDatos);
void ImprimeVector (string vector[20], int CDatos);
string temp;

int main ()
{
	char nombres2[100];
	string Nombres[20];
	int NumDatos;
	cout << "Ingrese la cantidad de nombres que va a digitar(maximo 20): ";
	cin >> NumDatos;
	LeerArray(Nombres, NumDatos);
	cout << "La lista de nombres es la siguiente: " << endl;
	ImprimeVector(Nombres, NumDatos);
	
	
	system ("pause");
	return 0;
}
void LeerArray (string Vector[20], int CDatos)
{
	for (int i = 0; i < CDatos; i++)
	{
		cout << "Ingrese el nombre -" << i + 1 << " : "; 
		cin >> Vector[i];
	}
}
void ImprimeVector (string Vector[20], int CDatos)
{
	for (int j = 0; j < CDatos; j++)
	{
		cout << j + 1 <<"- " << Vector[j] << endl;
	} 
}
