/*
Dado los vectores A y B de 7 elementos numericos cada uno realice la siguiente operacion.
Llene el vector A con numeros pares comprendidos en el intervalo 100 a 120.
El vector B debe llenarse a partir del ultimo elemento del vector A(forma decreciente).
El resultado es que el primer elemento del vector B debe ser el ultimo elemento
del vector A, y el ultimo elemento del vector B debe ser el primer elemento
del vector A. Reste ambos vectores A-B almacenando el resultado en un vector R.*/
/*este ejercicio es tan sencillo que no amerita comentarios...*/
#include "iostream"
#include "cstdlib"
#define LIMIT 7
using namespace std;
void llenaArrays(int lista1[LIMIT], int lista2[LIMIT]);
void restaArrays(int lista1[LIMIT], int lista2[LIMIT], int result[LIMIT]);
void muestra(int lista[LIMIT]);

/*funcion rand() = limite_inferior + rand() % (limite_superior +1 - limite_inferior)*/
int main() {
   int arrayA[LIMIT];
   int arrayB[LIMIT];
   int arrayR[LIMIT];
   llenaArrays(arrayA, arrayB);
   cout << "\n\tArray A" << endl;
   muestra(arrayA);
   cout << "\n\tArray B" << endl;
   muestra(arrayB);
   restaArrays(arrayA, arrayB, arrayR);
   cout << "\n\tLa resta del array A y el array B, es: " << endl;
   muestra(arrayR);
   return 0;
}
void llenaArrays(int lista1[LIMIT], int lista2[LIMIT]) {
   for (int i = 0; i < LIMIT; i++) {
      lista1[i] = 100 + rand() % (21);
   }
   int j = LIMIT - 1; /*lo mas eficiente que se me ocurrio xd*/
   for (int i = 0; i < LIMIT; i++) {
      lista2[i] = lista1[j];
      j--;
   }
}
void muestra(int lista[LIMIT]) {
   for (int i = 0; i < LIMIT; i++) {
      cout << lista[i] << " ";
   }
}
void restaArrays(int lista1[LIMIT], int lista2[LIMIT], int result[LIMIT]) {
   for (int i = 0; i < LIMIT; i++) {
      result[i] = lista1[i] - lista2[i];
   }
}
