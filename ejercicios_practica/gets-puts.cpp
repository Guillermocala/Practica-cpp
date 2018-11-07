//escribir un algoritmo que recoja e imprima un vector usando gets y puts. ahora, que lo imprima en orden ivnerso sin usar un vector aux
#include <iostream>
#include <cstring>
using namespace std;
void inviertevector(char vector[], int ancho);

int main(){
	char vector[100];
	cout << "Ingrese la sentencia: ";
	//obtiene los datos ingresdos incluyendo espacios, aunque no tiene en cuenta el tamano del vector
	gets(vector);
	int tamanio = strlen(vector);
	inviertevector(vector, tamanio);
	cout << "La sentencia invertida es: ";
	puts(vector); //imprime los datos 
	cout << endl;
	system("pause");
	return 0;
}
void inviertevector(char vector[], int ancho){
	for(int i = 0; i < ancho; i++){
		char copia = vector[i];
		vector[i] = vector[ancho-i];
		vector[ancho-i] = copia;
	}
}
