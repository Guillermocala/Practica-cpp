#include "iostream"
#include "conio.h"
#include "TAD_Vectores.cpp"
using namespace std;
using namespace tadVectorInt;
int menu();
int main()
{
   int sw = 1, aux;
   do{
      switch(menu())
      {
         case 1:
            inicializarvect();
            break;
         case 2:
            insertardatos();
            break;
         case 3:
            aux = Buscar();
            if(aux != 0)
            {
               cout << " el dato es " << vector[aux] << " y la pocicion es "<< aux <<endl;
            }
            else
            {
               cout << "Dato no encontrad..." << endl;
            }
            getch();
            break;
         case 4:
            imprimir();
            getch();
            break;
         case 5:
            borrardato();
            break;
         case 6:
            modificar();
            break;
         case 0:
            sw = 0;
            break;
         default:
            cout << "Opcion invalida... " << endl;
            getch();
            break;
      }
   }while(sw);
   return 0;
}
int menu(){
   int n;
   system("cls");
   cout << "############################" << endl;
   cout << "# 1-    Inicializar vector #" << endl;
   cout << "# 2-    Insertar datos     #" << endl;
   cout << "# 3-    Buscar datos       #" << endl;
   cout << "# 4-    Mostrar datos      #" << endl;
   cout << "# 5-    Borrar datos       #" << endl;
   cout << "# 6-    Modificar datos    #" << endl;
   cout << "# 7-    Ejercicio          #" << endl;
   cout << "# 0-    Salir              #" << endl;
   cout << "############################" << endl;
   cin >> n;
   return n;
}
