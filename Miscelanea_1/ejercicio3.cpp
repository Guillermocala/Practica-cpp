/*elabore un algoritmo que rellene un array con los números primos comprendidos entre 1 y 100 y los muestre en pantalla en orden ascendente.*/
#include <iostream>
using namespace std;

int main()
{
	const int Indicador = 100;
	int Numeros[Indicador];
	for (int i = 1; i < Indicador; i++)
	{
		int cont = 0;
		for (int j = 1; j <= i; i++)
		{
			if (i % j == 0)
			{
				cont++;
			}
		}
		if (cont == 2)
		{
			Numeros[i] = i;
		}
	}
	for (int k = Indicador; k >= 1; k--)
	{
		cout << " " << Numeros[k];
	}
	
	system("pause");
	return 0;
}
int main(void)
{
	int x,cont,z,i,tabla[100];
	
	i=0;
	for (x=1;x<=100;x++)
	{
		cont=0;
		for (z=1;z<=x;z++)
	{
	if (x%z==0)
	{
	   cont++;
	}
	}
	
	if (cont==2 || z==1 || z==0)
	{
		tabla[i]=x;
		i++;
	}
	
	}
	
	for (x=0;x<i;x++)
	{
		printf("%d\n",tabla[x]);
	}
           
    system("PAUSE");     
    return 0;
}

