#include <iostream>
#include <string.h>

using namespace std;

int datos;

int main(){
	char nombre[20]; //define el tamaño del vector
	cout << "entre el nombre a guardar en el vector: ";
	cin >> nombre;
	datos = strlen(nombre);
	cout << endl;
	for(int i=datos-1; i>=0; i--){ //para mostrar el valor invertido
		cout << "El elemento " << i << " del vector es: " << nombre[i] << "\n";
	}
	cout << endl;
	
system("pause");
return 0;
}
/*
si se quiere mostrar el valor horizontal se imprime el enunciado antes y dentro del ciclo esta instruccion:
cout << nombre[i];*/
