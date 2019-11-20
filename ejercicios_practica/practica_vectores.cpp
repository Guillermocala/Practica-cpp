/*Guillermo Cala --nov /11 /18; TERMINADO 20/11/19
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
#include "cstring"
#define LIMIT 20
using namespace std;
void LeerArray(string vector[LIMIT], int CDatos);
void imprimeDatos(string vect1[LIMIT], int vect2[LIMIT], int CDatos);
int nombresVocales(string vect1[LIMIT], int tamV1, string vect2[LIMIT], int vect3[LIMIT]);

int main()
{
	string Nombres[LIMIT];
	string NomConVocal[LIMIT];
	int cantVocals[LIMIT];
	int NumDatos;
	cout << "Ingrese la cantidad de nombres que va a digitar(maximo 20): ";
	cin >> NumDatos;
	LeerArray(Nombres, NumDatos);
	/*cout << "La lista de nombres es la siguiente: " << endl;
	ImprimeVector(Nombres, NumDatos);*/
	NumDatos = nombresVocales(Nombres, NumDatos, NomConVocal, cantVocals);
	cout << "Los nombres que tienen vocal son..." << endl;
	imprimeDatos(NomConVocal, cantVocals, NumDatos);
	system("pause");
	return 0;
}
void LeerArray(string Vector[LIMIT], int CDatos)
{
	for (int i = 0; i < CDatos; i++)
	{
		cout << "Ingrese el nombre #" << i + 1 << " : ";
		cin >> Vector[i];
	}
}
void imprimeDatos(string vect1[LIMIT], int vect2[LIMIT], int CDatos)
{
	/*vect1 CONTIENE NOMBRES CON VOCALES
	* vect" CONTIENE CANTIDAD DE VOCALES*/
	for (int j = 0; j < CDatos; j++)
	{
		cout << j + 1 <<"- " << vect1[j] << " con " << vect2[j] << " vocales"<< endl;
	}
}
int nombresVocales(string vect1[LIMIT], int tamV1, string vect2[LIMIT], int vect3[LIMIT])
{
	/*vect1 CONTIENE TODOS LOS Nombres
	* vect2 CONTIENE LOS NOMBRES QUE TIENEN AL MENOS UNA VOCAL
	* vect3 CONTIENE LA CANTIDAD DE VOCALES*/
	char temp[LIMIT];
	string tempStr;
	int limitVect = 0, cantVoc;
	for (int i = 0; i < tamV1; i++)
	{
		tempStr = vect1[i];
		strcpy(temp, tempStr.c_str()); //CONVERTIMOS A CHAR EL STRING PARA RECORRERLO Y PREGUNTAR
		cantVoc = 0;
		for (int j = 0; j < tempStr.length() + 1; j++)
		{
			char t = temp[j]; //CREAMOS UNA VAR CORTA PARA NO HACER LA EXPRESION DE EVALUACION TAN EXTENSA
			if (t == 'a' || t == 'e' || t == 'i' || t == 'o' ||t == 'u' || t == 'A' || t == 'E' || t == 'I' || t == 'O' || t == 'U')
			{
				cantVoc++;
			}
		}
		if (cantVoc != 0)
		{
			vect2[limitVect] = tempStr;
			vect3[limitVect] = cantVoc;
			limitVect++;
		}
	}
	return limitVect;
}
