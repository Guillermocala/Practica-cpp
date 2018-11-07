#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char vocales[5] = {'a','e','i','o','u'};
	int ancho = strlen(vocales);
	for(int i=0; i<=ancho; i++){
		cout << vocales[i];
	}
	cout << endl;
	system("pause");
	return 0;
}
