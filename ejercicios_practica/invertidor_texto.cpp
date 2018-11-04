//hacer un algoritmo que reciba una frase y la imprima al reves
#include <iostream>

using namespace std;
int cuentavector(char vector[], int &contador);
void imprimevector(char vector[], int contador);

int main(){
	int cont = 0;
	char vector[100];
	cout << "\tINVERTIDOR DE TEXTO" << endl;
	cout << "Ingrese la frase: ";
	gets(vector);
	cuentavector(vector, cont);
	imprimevector(vector, cont);
	cout << endl;
system("pause");
return 0;
}
int cuentavector(char vector[], int &contador){
	for(int i=0; vector[i] != '\0'; i++){
		contador++;
	}
	return contador;
}
void imprimevector(char vector[], int contador){
	cout << "La frase invertida es:";
	for(int a=contador; a>=0; a--){
		cout << vector[a];
	}
}
