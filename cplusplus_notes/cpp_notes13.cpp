/*
*Guillermo Cala; 2/ april/ 19
*function template
*/
#include "iostream"
using namespace std;
template <class id>
id suma (id a, id b);
int main(int argc, char const *argv[])
{
   int a, b, j;
   float c, d, k;
   cout << "Los numeros deben estar separados por cualquier tipo de espacio" << endl;
   cout << "Suma de dos numeros enteros: ";
   cin >> a >> b;
   j = suma<int>(a, b);
   cout << "Resultado enteros: " << j << endl;
   cout << "Suma de dos numeros decimales: ";
   cin >> c >> d;
   k = suma<float>(c, d);
   cout << "Resultado decimales: " << k << endl;
   return 0;
}
template <class id>
id suma (id a, id b)
{
   id result = a + b;
   return result;
}
