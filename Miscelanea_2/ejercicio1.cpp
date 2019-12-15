/*
* Realizar un programa con funciones que dada una fecha
* y luego una cantidad de dias, imprimir la nueva fecha.
* Tener en cuenta que hay meses con 31, 30 y hasta 28 dias.
*/
/*ya se que es mala practica usar mas de 5 parametros, pero no quiero recurrir a variables globales*/
#include "iostream"
using namespace std;
void recibeDatos(int meses[12], int &dia, int &mes, int &anio, int &cant);
void calcula(int meses[12], int &dia, int &mes, int &anio, int &cant);
void muestra(int diaI, int mesI, int anioI, int diaF, int mesF, int anioF, int cant);

int main() {
   int meses[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   int diaIni, mesIni, anioIni, diaFinal, mesFinal, anioFinal, cantDias, check, temp;
   recibeDatos(meses, diaIni, mesIni, anioIni, cantDias);
   temp = cantDias; /*para conservar la cantidad de dias, no queremos borrar datos. a preferencia copiar*/
   check = diaIni + cantDias;
   diaFinal = diaIni;
   mesFinal = mesIni;
   anioFinal = anioIni;
   if (check <= meses[mesIni - 1]) { /*verifica si esta en el mismo mes*/
      muestra(diaIni, mesIni, anioIni, check, mesIni, anioIni, cantDias);
   }
   else {
      calcula(meses, diaFinal, mesFinal, anioFinal, temp);
      muestra(diaIni, mesIni, anioIni, diaFinal, mesFinal, anioFinal, cantDias);
   }
   system("pause");
   return 0;
}
void recibeDatos(int meses[12], int &dia, int &mes, int &anio, int &cant) {
   cout << "Ingrese el anio(0 a 5000): ";
   cin >> anio;
   while (anio <= 0 || anio >= 5000) {
      cout << "Dato erroneo, verifique..." << endl;
      cout << "Ingrese el anio(0 a 5000): ";
      cin >> anio;
   }
   cout << "Ingrese el mes(1 a 12): ";
   cin >> mes;
   while (mes <= 0 || mes > 12) {
      cout << "Dato erroneo, verifique..." << endl;
      cout << "Ingrese el mes(1 a 12): ";
      cin >> mes;
   }
   cout << "Ingrese el dia: ";
   cin >> dia;
   while (dia <= 0 || dia > meses[mes - 1]) {
      cout << "Dato erroneo, verifique..." << endl;
      cout << "Ingrese el dia: ";
      cin >> dia;
   }
   cout << "Ingrese la cantidad de dias a transcurrir: ";
   cin >> cant;
}
void calcula(int meses[12], int &dia, int &mes, int &anio, int &cant) {
   /*debemos hacer evaluaciones constantes para el correcto funcionamiento del algoritmo*/
   marca:
   while (cant > 0) {
      for (int i = dia; i <= meses[mes - 1]; i++) {
         if (cant <= 0) {
            goto marca;
         }
         else if (dia == 31 && mes == 12) {
            mes = 0; /*en 0 porque por fuera se aumenta*/
            anio++;
         }
         dia++;
         cant--;
      }
      dia = 1;
      mes++;
   }
}
void muestra(int diaI, int mesI, int anioI, int diaF, int mesF, int anioF, int cant) {
   system("cls");
   cout << "\tFECHA INICIAL..." << endl;
   cout << "Dia: " << diaI << endl;
   cout << "Mes: " << mesI << endl;
   cout << "Anio: " << anioI << endl;
   cout << "\tFECHA DESPUES DE " << cant << " DIAS" << endl;
   cout << "Dia: " << diaF << endl;
   cout << "Mes: " << mesF << endl;
   cout << "Anio: " << anioF << endl;
}
