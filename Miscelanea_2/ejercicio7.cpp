/*
Realice un programa con funciones sobrecargadas en el que se necesita implementar
un control de minutos en un centro de comunicaciones. Usted dispone de una
matriz de 300x6. Una llamada local tiene un precio de Bs 100 por minuto,
una llamada a celular Bs 350 y una llamada internacional Bs 500. Al finalizar
cada llamada almacene lo siguiente la siguiente: En la columna 0 se almacenan
la cantidad de minutos de la llamada, en la columna 1 se almacena el tipo de
llamada(local = 1, celular = 2, internacional = 3), en la columna 2 se coloca la
tarifa de tipo de llamada, en la columna 3 se coloca el costo de llamada(minutos * tarifa),
en la columna 4 se coloca el monto del impuesto (iva), en la columna 5 se almacena
el costo total de la llamada(costo_llamada * iva). Al final del dia se necesita
generar el repote con los totales, promedios, minimos y maximos de cada columna.
*/
/*trabajo con valores aleatorios y dejo como directivas los costos y demas constantes*/
#include "iostream"
#include "cstdlib"
#define ROWS 10 /*se supone es 300, pero trabajare con 10 por el momento*/
#define COLS 6
#define IVA 25
#define COST_LOCAL 100
#define COST_CEL 350
#define COST_INTER 500
using namespace std;

void llenaCentral(int tabla[][COLS]);
void muestraCentral(int tabla[][COLS]);

int main() {
   int central[ROWS][COLS];
   llenaCentral(central);
   string menu = "A- Cantidad Minutos\nB- Tipo llamada(1- local. 2-celular. 3-internacional)\nC- Costo por Minuto\nD- Costo parcial\nE- IVA\nF- Costo total";
   cout << menu << endl;
   cout << "\tA\tB\tC\tD\tE\tF" << endl;
   muestraCentral(central);
   return 0;
}
void llenaCentral(int tabla[][COLS]) {
   for (int i = 0; i < ROWS; i++) {
      for (int j = 0; j < COLS; j++) {
         switch (j) {
            case 0:
               tabla[i][j] = 1 + rand() % (50);
               break;
            case 1:
               tabla[i][j] = 1 + rand() % (3);
               break;
            case 2:
               if (tabla[i][1] == 1) { /*local 100bs x min*/
                  tabla[i][j] = COST_LOCAL;
               }
               else if (tabla[i][1] == 2) { /*celular 350bs x min*/
                  tabla[i][j] = COST_CEL;
               }
               else { /*internacional 500bs x min*/
                  tabla[i][j] = COST_INTER;
               }
               break;
            case 3:
               if (tabla[i][1] == 1) { /*local 100bs x min*/
                  tabla[i][j] = tabla[i][0] * COST_LOCAL;
               }
               else if (tabla[i][1] == 2) { /*celular 350bs x min*/
                  tabla[i][j] = tabla[i][0] * COST_CEL;
               }
               else { /*internacional 500bs x min*/
                  tabla[i][j] = tabla[i][0] * COST_INTER;
               }
               break;
            case 4: /*el iva va a ser un valo constante*/
               tabla[i][j] = IVA;
               break;
            case 5:
               tabla[i][j] = tabla[i][3] * IVA;
               break;
            default:
               /*unexpected funcion*/
               break;
         }
      }
   }
}
void muestraCentral(int tabla[][COLS]) {
   for (int i = 0; i < ROWS; i++) {
      cout << "[\t";
      for (int j = 0; j < COLS; j++) {
         cout << tabla[i][j] << "\t";
      }
      cout << "]" << endl;
   }
}
