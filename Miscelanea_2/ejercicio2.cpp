/*
Sea Par_Impar un arreglo de enteros con tamaño 10, realice un programa que cargue
automaticamente numeros pares en las posiciones que sean pares e impares
donde las posiciones sean impares y calcule su promedio e imprima en pantalla.
*/
#include "iostream"
#include "cstdlib"
using namespace std;
/*
funcion rand() limite_inferior + rand() % (limite_superior +1 - limite_inferior)
*/
int main() {
   int Par_Impar[10];
   int suma = 0, temp;
   for (int i = 0; i < 10; i++) {
      if (i % 2 == 0) {
         Par_Impar[i] = rand() % 100 * 2; /*solo multiplicamos por un par y listo*/
      }
      else {
         /*hacemos esta pequeña seccion para asegurar que el numero
         ingresado es impar*/
         temp = rand() % 100;
         while (temp % 2 == 0) {
            temp = rand() % 100;
         }
         Par_Impar[i] = temp;
      }
      suma += Par_Impar[i];
   }
   for (int i = 0; i < 10; i++) {
      cout << "Posicion "<< i << " - " << Par_Impar[i] << endl;
   }
   cout << "El promedio es: " << suma/10 << endl;
   return 0;
}
