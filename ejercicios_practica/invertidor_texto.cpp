//hacer un algoritmo que reciba una frase y la imprima al reves
#include <iostream>
#include <cstring>
using namespace std;
int cuentavector(char vector[], int &contador);
void imprimevector(char vector[], int contador);

int main(){
	int cont;
	char vector[100];
	cout << "\tINVERTIDOR DE TEXTO" << endl;
	cout << "Ingrese la frase: ";
	gets(vector);
	cont = strlen(vector);
	imprimevector(vector, cont);
	cout << endl;
system("pause");
return 0;
}
void imprimevector(char vector[], int contador){
	cout << "La frase invertida es:";
	for(int a=contador; a>=0; a--){
		cout << vector[a];
	}
}
