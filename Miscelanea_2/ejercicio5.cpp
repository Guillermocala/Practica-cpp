/*
Realice un programa con funciones recursivas y de manera iterativa que calcule
e imprima en pantalla los N primeros numeros primos siendo N un numero que
se introduce por teclado. Posteriormente, el programa debera mostrar
todos los numeros primos que hay entre 1 y N.*/
/*en esta version no es posible guardar los datos individualmente, sino de forma
colectiva. aunque de esta forma se exceptua el limite de numeros, ya que se usa
anidamiento de string, pero no es posible operar con los datos resultantes.
este algoritmo solo trata lectura de datos*/
#include "iostream"
#include "sstream"
using namespace std;
void primos(int n);
string res = "";

int main() {
   int cant;
   cout << "Ingrese el limite de numeros primos: ";
   cin >> cant;
   while (cant <= 0) {
      cout << "Valor erroneo! verifique" << endl;
      cout << "Ingrese el limite de numeros primos: ";
      cin >> cant;
   }
   primos(cant);
   cout << res;
   return 0;
}
void primos(int n) {
   if (n == 2) {
      stringstream convert;
      convert << n;
      res += " " + convert.str();
   }
   else {
      int cant = 0;
      for (int i = 1; i <= n; i++) {
         if (n % i == 0) {
            cant++;
         }
      }
      if (cant == 2) {
         stringstream convert;
         convert << n;
         res += " " + convert.str();
      }
      primos(n - 1);
   }
}
