/*
*Dados dos arrays tomar el primer; imprimirlo, modificarlo e imprimir su modificacion
*y el segundo solo imprimirlo usando punteros en las operaciones que lo permitan
*/
#include <iostream>
#include "cstring"
using namespace std;
void ModifyArray(int list[], const int* limit);
void PrintArray(const int listB[], const int* limit);
int Cant(const int array[]);
int main()
{
   int IndA = 5, IndB = 5;
   int list1[IndA]{1,2,3,4,5};
   int list2[IndB]{6,7,8,9,10};
   system("cls");
   cout << "Array #1: ";
   PrintArray(list1, &IndA);
   cout << "\nArray #2: ";
   PrintArray(list2, &IndB);
   cout << "\nModificar el primer arreglo..." << endl;
   cout << "Ingrese el limite del arreglo: ";
   cin >> IndA;
   ModifyArray(list1, &IndA);
   cout << "Arreglos actualizados..." << endl;
   cout << "\nArray #1: ";
   PrintArray(list1, &IndA);
   cout << "\nArray #2: ";
   PrintArray(list2, &IndB);
   system("pause");
   return 0;
}
void ModifyArray(int list[], const int* limit)
{
   for(int i = 0; i < *limit; i++)
   {
      cout << "Ingrese el valor " << i + 1 << " : ";
      cin >> *(list + i);
   }
}
void PrintArray(const int listB[], const int* limit)
{
   for(int i = 0; i < *limit; i++)
   {
      cout << *(listB + i) << " - ";
   }
   cout << endl;
}
