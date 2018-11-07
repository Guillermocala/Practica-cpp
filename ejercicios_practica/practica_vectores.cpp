#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int numeros[10]={4,50,62,3,4,8};
	int numero1=numeros[5];
	cout << "el numero en la posicion 5 es: " << numero1 << endl;
	numeros[5]=41;
	int numero2=numeros[5];
	cout << "el numero en la posicion 5 despues de modificar es: " << numero2 << endl;
	system("pause");
	return 0;
}
