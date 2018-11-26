#include <iostream>
using namespace std;
int calculo (int a);

int main ()
{
	int num = 1;
	while (num <= 100)
	{
		calculo (num);
		num++;
	}
system ("pause");
return 0;
}
int calculo (int a){
	int cont = 0, i;
	for (i = 1; i <= a ; i++)
	{
		if(a % i == 0)
		{
			cont++;
		}
	}
	if (cont == 2)
	{
		cout << a <<" es primo" << endl;
	}
}
