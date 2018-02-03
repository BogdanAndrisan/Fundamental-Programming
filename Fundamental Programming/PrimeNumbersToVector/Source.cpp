//Construiţi dinamic un vector în care să depuneţi primele n numere naturale
//prime, unde n este citit de la tastatură.
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, *primeNumbers, m = 2;
	bool prime = false;
	printf("Numarul de nr. prime:"); scanf("%d", &n);
	primeNumbers = (int*)malloc(n * sizeof(int));
	primeNumbers[0] = 2;
	primeNumbers[1] = 3;
	for (int i = 2; i < n; i++)
	{
		while (prime == false)
		{
			m++;
			for (int i = 2; i <= m/2; i++)
			{
				prime = true;
				if (m%i == 0)
				{
					prime = false;
					break;
				}
			}
		}
		primeNumbers[i] = m;
		prime = false;
	}
	for (int i = 0; i < n; i++)
	{
		printf("p[%d] = %d    ", i, primeNumbers[i]);
	}
	getchar();
	getchar();
	return 0;
}