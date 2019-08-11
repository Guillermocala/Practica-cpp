#include "iostream"
#include "conio.h"
#include "tadVectorInt.cpp"
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
            tope=inicializarvect();
            break;
         case 2:
            insertardatos(tope);
            break;
         case 3:
            aux = Buscar();
            cout << " el numero es " << vector[aux] << " y la pocicion es "<< aux <<endl;
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
         case 7:
            //salir
            sw=0;
            break;
         default:
            cout<<"numero erroneo.";/* value */;
            break;
      }
   }while(sw);
   return 0;
}
int menu(){
   int n;
   system("cls");
   cout << "***********************" << endl;
   cout << "*1-   inicializar vector *" << endl;
   cout << "*2-   insertar datos     *" << endl;
   cout << "*3-   Buscar datos       *" << endl;
   cout << "*4-   mostrar datos      *" << endl;
   cout << "*5-   borrar datos       *" << endl;
   cout << "*6-   modificar datos    *" << endl;
   cout << "*7-   salir              *" << endl;
   cout << "***********************" << endl;
   cin >> n;
   return n;
}
