#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char vocales[6] = {'a','e','i','o','u','\0'};
	int ancho = strlen(vocales);
	for(int i=0; i<ancho; i++){
		cout << vocales[i] << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}
