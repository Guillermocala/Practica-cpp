/*
8-Construya un algoritmo que realice las siguientes operaciones:
	-Tiene dos vectores numericos de 100 elementos cada uno. Asegurese que para cada vector
    no existan dos elementos consecutivos repetidos.
	-Para el vector A determine el promedio de valores de las pocisiones pares del vector.
	-Para el vector B determine el promedio de valores de las pocisiones impares del vector.
	-Sume los dos vectores y guarde el resultado en un vector C.
	-Imprima C.
	-Imprima el promedio pedido para el vector A y el vector B.
*/
#include "iostream"
#include "cstdlib"
#define LIMIT 20 /*es de 100, pero trabajare con 20 por el momento*/
using namespace std;

void llenaArray(int lista[LIMIT]);
void sumaArray(int lista1[LIMIT], int lista2[LIMIT], int listaR[LIMIT]);
void muestraArray(int lista[LIMIT]);
float promedioArray(int lista[LIMIT]);

int main() {
   int arrayA[LIMIT];
   int arrayB[LIMIT];
   int arrayC[LIMIT];
   float promedio;
   llenaArray(arrayA);
   llenaArray(arrayB);
   sumaArray(arrayA, arrayB, arrayC);
   cout << "Array A: " << endl;
   muestraArray(arrayA);
   cout << "Array B: " << endl;
   muestraArray(arrayB);
   cout << "Array C(suma de A y B): " << endl;
   muestraArray(arrayC);
   promedio = promedioArray(arrayA);
   cout << "Promedio de A: " << promedio << endl;
   promedio = promedioArray(arrayB);
   cout << "Promedio de B: " << promedio << endl;
   return 0;
}
void llenaArray(int lista[LIMIT]) {
   int num;
   for (int i = 0; i < LIMIT; i++) {
      num = 1 + rand() % (50);
      /*preguntamos por el anterior y para ello necesitamos una variable, si no
      cumple volvemos a asignar hasta que sea diferente. obviamente omitimos el
      primero con i != 0*/
      while (i != 0 && lista[i - 1] == num) {
         num = 1 + rand() % (50);
         lista[i] = num;
      }
      lista[i] = num;
   }
}
void sumaArray(int lista1[LIMIT], int lista2[LIMIT], int listaR[LIMIT]) {
   for (int i = 0; i < LIMIT; i++) {
      listaR[i] = lista1[i] + lista2[i];
   }
}
void muestraArray(int lista[LIMIT]) {
   for (int i = 0; i < LIMIT; i++) {
      cout << lista[i] << " ";
   }
   cout << endl;
}
float promedioArray(int lista[LIMIT]) {
   float prom, suma = 0;
   for (int i = 0; i < LIMIT; i++) {
      suma += lista[i];
   }
   prom = suma / LIMIT;
   return prom;
}
