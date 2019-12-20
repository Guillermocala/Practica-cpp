/*
Un sensor submarino instalado frente a nuestras costas toma lecturas de
la temperatura del agua(grados centigrados) y el nivel ruido(decibelios)
todos los meses y los almacena en una matriz de orden 12x2.
construya un programa que determine mensualmente los valores
promedios, minimos y maximos del sensor.
*/
#include "iostream"
#include "cstdlib"
#define FILAS 12 /*uso directivas en caso tal las dimensiones varien, sea solo cambiar el valor*/
#define COLUMNAS 2
using namespace std;
void llenaMatriz(int tabla[FILAS][COLUMNAS]);
void muestra(int tabla[FILAS][COLUMNAS]);

int main() {
   int sensor[FILAS][COLUMNAS];
   /*sum = suma, may = mayor, men = menor, prom = promedio. G = grados centigrados, D = decibelios*/
   float sumG = 0, sumD = 0, promG, promD;
   int mayG = 0, mayD = 0, menG = 999, menD = 999;
   llenaMatriz(sensor);
   muestra(sensor);
   /*no incluyo la sgte seccion de codigo en una funcion debido a la cantidad de variables
   y evito usar variables globales, asi que mejor dejo esta seccion sin tocar*/
   for (int i = 0; i < FILAS; i++) {
      for (int j = 0; j < COLUMNAS; j++) {
         if (j % 2 == 0) { /*para tomar la fila par, no es necesario, pero en caso de
            modificar el codigo le da mayor legabilidad que si usamos constantes*/
            sumG += sensor[i][j];
            if (sensor[i][j] > mayG) {
               mayG = sensor[i][j];
            }
            if (sensor[i][j] < menG) {
               menG = sensor[i][j];
            }
         }
         else {
            sumD += sensor[i][j];
            if (sensor[i][j] > mayD) {
               mayD = sensor[i][j];
            }
            if (sensor[i][j] < menD) {
               menD = sensor[i][j];
            }
         }
      }
   }
   promG = sumG / 12;
   promD = sumD / 12;
   cout << "El promedio de grados es: " << promG << ", el de decibelios: " << promD << endl;
   cout << "El menor grado es: " << menG << ", el de decibelios: " << menD << endl;
   cout << "El mayor grado es: " << mayG << ", el de decibelios: " << mayD << endl;
   return 0;
}
void llenaMatriz(int tabla[FILAS][COLUMNAS]) {
   for (int i = 0; i < FILAS; i++) {
      for (int j = 0; j < COLUMNAS; j++) {
         tabla[i][j] = rand() % 100;
      }
   }
}
void muestra(int tabla[FILAS][COLUMNAS]) {
   cout << "\tSENSOR SUBMARINO" << endl;
   cout << "COLUMNA 1 GRADOS CENTIGRADOS, COLUMNA 2 DECIBELIOS" << endl;
   for (int i = 0; i < FILAS; i++) {
      cout << "[\t";
      for (int j = 0; j < COLUMNAS; j++) {
         cout << tabla[i][j] << "\t";
      }
      cout << "]" << endl;
   }
}
