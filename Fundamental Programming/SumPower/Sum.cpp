//De la tastatură se citesc două numere naturale n şi k.Să se calculeze şi să
//se afişeze pe ecran valoarea expresiei :
//S(n,k) = i=1 E n i^k
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n, k;
	double sum = 0;
	printf("Introdu n:"); scanf("%d", &n);
	printf("Introdu k:"); scanf("%d", &k);
	for (int i = 1; i <= n; i++)
	{
		sum += pow(i,k);
	}
	printf("Result: %.0lf", sum); //no trailing 0's
	getchar();
	getchar();
	return 0;
}