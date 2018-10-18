/*crear un algoritmo que produzca una tabla de conversion de temperatura celsius a fahrenheit. 
suponga que se van a desplegar temperaturas fahrenheit correspondientes a las temperaturas celsius 
que varian de 5 a 50 grados en incrementos de cinco grados*/

#include <iostream>

using namespace std;

int main(){
	int grados_c = 5;
	while(grados_c <= 50){
		float grados_f = (grados_c * 1.8 ) + 32;
		cout << "-" << grados_c << " grados celsius son: " << grados_f << " grados fahrenheit" << endl;
		grados_c += 5;
	}
	
system("pause");
return 0;
}
