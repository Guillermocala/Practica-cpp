/*
Haga un programa usando funciones recursivas que calcule la potencia de
un numero entero elevado a un numero natural solo en base a sumas.
Sugerencia recuerde que el producto se puede hacer en base a sumas.
*/
#include "iostream"
using namespace std;
int potencia(int base, int expo);

int main() {
   int base, exponente;
   cout << "Ingrese la base: ";
   cin >> base;
   cout << "Ingrese el exponente: ";
   cin >> exponente;
   cout << "El resultado es: " << potencia(base, exponente) << endl;
   return 0;
}
int potencia(int base, int expo) {
   if (expo == 0) {
      return 1;
   }
   else {
      /*return base * potencia(base, expo - 1); forma normal*/
      int result = 0;
      for (int i = 1; i <= potencia(base, expo - 1); i++) {
         result += base;
      }
      return result;
   }
}
