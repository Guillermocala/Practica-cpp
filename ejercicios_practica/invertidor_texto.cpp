//hacer un algoritmo que reciba una frase y la imprima al reves
#include <iostream>

using namespace std;
int cuentavector(char vector[], int *contador);

int main(){
	char vector[100];
	int cont = 0;
	cout << "\tINVERTIDOR DE TEXTO" << endl;
	cout << "Ingrese la frase: ";
	gets(vector);
	cuentavector(vector, &cont);
	cout << "La frase invertida es:";
	for(int a=cont; a>=0; a--){
		cout << vector[a];
	}
	cout << endl;
	
system("pause");
return 0;
}
int cuentavector(char vector[], int *contador){
	for(int i=0; vector[i] != '\0'; i++){
		*contador++;
	}
	return *contador;
}
