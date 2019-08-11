#include "iostream"
using namespace std;
namespace tadVectorInt
{
   int vector[200], tope;
   int inicializarvect(){
      int n;
         cout<<"ingrese el numero de espacios qwue deseas: ";
      cin>>n;
      return n;
   };
   void insertardatos(int n){
      for(int i=0;i<n;i++){
         cout<<"ingrese el dato en la pocicion "<<i<<" :";
         cin>>vector[i];
      }
   };
   int Buscar(){
      int pos, n;
      cout<<"ingrese el numero que desea busar: ";
      cin>>n;
      for(int i = 0; i < tope; i++)
      {
         if(n==vector[i]){
            pos=i;
         }
      }
      return pos;
   };
   void imprimir(){
      for(int i=0;i<tope;i++){
         cout<<vector[i]<<" ";
      }
   };
   void borrardato(){
      int h;
      cout << "Ingrese la posicion a borrar: ";
      cin >> h;
      for(int i=0;i<tope;i++)
      {
         if(i == h)
         {
            for(int p = i; p < tope; p++)
            {
               vector[p]=vector[p+1];
            }
            break;
         }
      }
      tope--;
   };
   void modificar(){
   int n,nuevo;
      cout<<"ingrese la pocicion del vector que desea modificar: ";
      cin>>n;
      cout<<"ingrese el nuevo numero: ";
      cin>>nuevo;
      vector[n]=nuevo;
   };
}
