#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int cont;
	char agregar;
	char vocales[10];
	cout << "cuantos datos va a ingresar?: ";
	cin >> cont;
	for(int a=0; a<cont; a++){
		cout << "ingrese los datos: ";
		cin >> agregar;
		vocales[a] = agregar;
	}
	puts(vocales);
	
	cout << endl;
	system("pause");
	return 0;
}
