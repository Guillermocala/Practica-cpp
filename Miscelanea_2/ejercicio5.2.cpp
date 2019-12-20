/*
Realice un programa con funciones recursivas y de manera iterativa que calcule
e imprima en pantalla los N primeros numeros primos siendo N un numero que
se introduce por teclado. Posteriormente, el programa debera mostrar
todos los numeros primos que hay entre 1 y N.*/
/**/
#include "iostream"
#define LIMIT 100
using namespace std;

void primos(int array[LIMIT], int n, int &tope);
void muestra(int array[LIMIT], int tope);

int main() {
   int limite = 0;
   int numeros[LIMIT];
   int cant;
   cout << "Ingrese el limite de numeros primos(max 100): ";
   cin >> cant;
   while (cant <= 0 || cant > LIMIT) {
      cout << "Valor erroneo!, rectifique" << endl;
      cout << "Ingrese el limite de numeros primos(max 100): ";
      cin >> cant;
   }
   primos(numeros, cant, limite);
   muestra(numeros, limite);
   return 0;
}
void primos(int array[LIMIT], int n, int &tope) {
   if (n == 2) {
      array[tope] = n;
      tope++;
   }
   else {
      int cant = 0;
      for (int i = 1; i <= n; i++) {
         if (n % i == 0) {
            cant++;
         }
      }
      if (cant == 2) {
         array[tope] = n;
         tope++;
      }
      primos(array, n - 1, tope);
   }
}
void muestra(int array[LIMIT], int tope) {
   /*como se guardan al reves, toca imprimir
   de la misma forma para verlos en orden creciente*/
   for (int i = (tope - 1); i >= 0; i--) {
      cout << array[i] << " ";
   }
}
