//Se citeşte de la tastatură un număr natural.Să se verifice dacă este
//palindrom.Un număr natural este palindrom dacă cifrele lui citite de la
//stânga spre dreapta sunt aceleaşi cu situaţia în care le citim de la dreapta
//spre stânga.
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int nr,copie,pal = 0;
	printf("Introduceti un numar:"), scanf("%d", &nr);
	copie = nr;
	while (nr != 0)
	{
		pal = pal * 10 + nr % 10;
		nr /= 10;
	}
	if (pal == copie)
	{
		printf("Numarul introdus este palindrom");
	}
	else
	{
		printf("Numarul introdus nu este palindrom");
	}
	getchar();
	getchar();
	return 0;
}