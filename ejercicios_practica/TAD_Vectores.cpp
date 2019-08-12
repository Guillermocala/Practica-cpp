#include "iostream"
using namespace std;
namespace tadVectorInt
{
   const int size = 200;
   int vector[size], tope, current = 0, nPos, dato;
   int inicializarvect()
   {
      cout << "Ingrese el numero de espacios que desea usar(max " << size << " ): ";
      cin >> tope;
   };
   void insertardatos()
   {
      cout << "Ingrese el dato: ";
      cin >> vector[current];
      current++;
   };
   int Buscar()
   {
      int pos = 0;
      cout << "ingrese el dato que desea busar: ";
      cin >> dato;
      for(int i = 0; i < current; i++)
      {
         if(dato == vector[i])
         {
            pos = i;
            return pos;
         }
      }
      return pos;
   };
   void imprimir()
   {
      for(int i = 0; i < current; i++)
      {
         cout << vector[i] << " - ";
      }
   };
   void borrardato()
   {
      cout << "Ingrese la posicion a borrar: ";
      cin >> nPos;
      if(nPos >= 0 && nPos <= current)
      {
         for(int i = 0; i < current; i++)
         {
            if(i == nPos)
            {
               for(int p = i; p < current; p++)
               {
                  vector[p]=vector[p+1];
               }
               break;
            }
         }
         tope--;
      }
      else
      {
         cout << "Posicion erronea" << endl;
      }
      getch();
   };
   void modificar()
   {
      cout << "Ingrese la pocicion del vector que desea modificar: ";
      cin >> nPos;
      if(nPos >= 0 && nPos <= current)
      {
         cout << "Ingrese el nuevo dato: ";
         cin >> dato;
         vector[nPos] = dato;
      }
      else
      {
         cout << "Posicion erronea" << endl;
      }
      getch();
   };
}
namespace tadVectorString
{
   const int size = 100;
   int tope, current = 0, nPos;
   string vector[size], dato;
   void inicializarvect()
   {
      cout << "Ingrese el numero de espacios que desea usar(max " << size << " ): ";
      cin >> tope;
   };
   void insertardatos()
   {
      cout << "Ingrese el dato: ";
      cin >> vector[current];
      current++;
   };
   int Buscar()
   {
      int pos = 0;
      cout << "Ingrese el dato que desea busar: ";
      cin >> dato;
      for(int i = 0; i < current; i++)
      {
         if(dato == vector[i])
         {
            pos = i;
            return pos;
         }
      }
      return pos;
   };
   void imprimir()
   {
      for(int i = 0; i < current; i++)
      {
         cout << vector[i] << " - ";
      }
   };
   void borrardato()
   {
      cout << "Ingrese la posicion a borrar: ";
      cin >> nPos;
      if(nPos >= 0 && nPos <= current)
      {
         for(int i = 0; i < current; i++)
         {
            if(i == nPos)
            {
               for(int p = i; p < current; p++)
               {
                  vector[p] = vector[p + 1];
               }
               break;
            }
         }
         tope--;
      }
      else
      {
         cout << "Posicion erronea" << endl;
      }
      getch();
   };
   void modificar()
   {
      cout << "Ingrese la pocicion del vector que desea modificar: ";
      cin >> nPos;
      if(nPos >= 0 && nPos <= current)
      {
         cout << "Ingrese el nuevo dato: ";
         cin >> dato;
         vector[nPos] = dato;
      }
      else
      {
         cout << "Posicion erronea" << endl;
      }
      getch();
   };
}
