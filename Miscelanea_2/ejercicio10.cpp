/*
10-Sea una matriz M de orden 5x5 realice las siguientes operaciones:
	-Llene la matriz con valores positivos impares.
	-Determine cual es el mayor elemento de la matriz
	-Determine cual es el menor elemento de la matriz
*/
/*otro codigo muy facil, no necesita explicacion*/
#include "iostream"
#include "cstdlib"
#define LIMIT 5
using namespace std;

void muestra(int tabla[][LIMIT]);

int main() {
   int matriz[LIMIT][LIMIT];
   int num, mayor = 0, menor = 999;
   for (int i = 0; i < LIMIT; i++) {
      for (int j = 0; j < LIMIT; j++) {
         num = 0 + rand() % (50);
         while (num % 2 == 0) {
            num = 0 + rand() % (50);
         }
         matriz[i][j] = num;
         if (matriz[i][j] > mayor) {
            mayor = matriz[i][j];
         }
         if (matriz[i][j] < menor) {
            menor = matriz[i][j];
         }
      }
   }
   cout << "\tMATRIZ DE NUMEROS IMPARES" << endl;
   muestra(matriz);
   cout << "el mayor elemento es: " << mayor << endl;
   cout << "el menor elemento es: " << menor << endl;
   return 0;
}
void muestra(int tabla[][LIMIT]) {
   for (int i = 0; i < LIMIT; i++) {
      cout << "[\t";
      for (int j = 0; j < LIMIT; j++) {
         cout << tabla[i][j] << "\t";
      }
      cout << "]" << endl;
   }
}
