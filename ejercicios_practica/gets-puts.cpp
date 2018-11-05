//escribir un algoritmo que recoja e imprima un vector usando gets y puts
#include <iostream>
using namespace std;

int main(){
	char vector[100];
	cout << "Ingrese la sentencia: ";
	//obtiene los datos ingresdos incluyendo espacios, aunque no tiene en cuenta el tamano del vector
	gets(vector);
	cout << "La sentencia ingresada es: ";
	puts(vector); //imprime los datos 
	cout << endl;
	system("pause");
	return 0;
}
