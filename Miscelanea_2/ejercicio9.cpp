/*
Realice un programa con funciones donde se carga, ordena e imprime cadenas de caracteres
al igual que contar la cantidad de caracteres por nombre y el total de ellos.
*/
/*mediante una interfaz simple se añaden nombres a un array y al mmomento de mostrar
se indica a un lado la cantidad de caracteres que forman el nombre*/
#include "iostream"
#include "conio.h"
#define LIMIT 5 /*limite de nombres para el programa*/
using namespace std;

int menu();
void muestra(string lista[LIMIT], int limite);
void ordenar(string lista[LIMIT], int limite);

int main() {
   string nombres[LIMIT];
   int sw = 1, indice = 0;
   string temp; /*de aqui pasan al array*/
   do {
      switch (menu()) {
         case 1: /*ingresa nombre*/
            system("cls");
            if (indice < LIMIT) {
               cout << "Ingrese el nombre: ";
               cin.ignore();
               getline(cin, temp);
               nombres[indice] = temp;
               indice++;
            }
            else {
               cout << "Capacidad limite alcanzada, no es posible ingresar mas." << endl;
               getch();
            }
            break;
         case 2: /*ordena nombres*/
            system("cls");
            if (indice != 0) {
               ordenar(nombres, indice);
               cout << "Lista ordenada!" << endl;
            }
            else {
               cout << "Lista vacia" << endl;
            }
            getch();
            break;
         case 3: /*muestra nombres*/
            system("cls");
            if (indice != 0) {
               muestra(nombres, indice);
            }
            else {
               cout << "Lista vacia" << endl;
            }
            getch();
            break;
         case 0:
            sw = 0;
            break;
         default:
            cout << "Ha ingresado un valor invalido!" << endl;
            break;
      }
   } while(sw);
   return 0;
}
int menu() {
   int opcion;
   system("cls");
   cout << "\t####################################" << endl;
   cout << "\t####          NOMBRES          #####" << endl;
   cout << "\t####################################" << endl;
   cout << "\t####       1- INGRESAR         #####" << endl;
   cout << "\t####       2- ORDENAR          #####" << endl;
   cout << "\t####       3- MOSTRAR          #####" << endl;
   cout << "\t####       0- SALIR            #####" << endl;
   cout << "\t####################################" << endl;
   cin >> opcion;
   return opcion;
}
void muestra(string lista[LIMIT], int limite) {
   for (int i = 0; i < limite; i++) {
      cout << "Nombre #" << i + 1  << ": " << lista[i] << "\tcantidad de caracteres: " << lista[i].length() << endl;
   }
   cout << endl;
}
void ordenar(string lista[LIMIT], int limite) {
   /*ordenamiento insertion-sort*/
   int n = limite;
   for (int i = 1; i < n; i++) {
      string ward = lista[i];
      int j = i - 1;
      while (j >= 0 && lista[j].compare(ward) > 0) {
         lista[j + 1] = lista[j];
         j = j - 1;
      }
      lista[j + 1] = ward;
   }
}
