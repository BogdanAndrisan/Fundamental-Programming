//-------------------------------------------------------------- -
//| Nr. | NUMELE SI PRENUMELE | Varsta | Salariu|
//|crt.| | | |
//|---- + ---------------------------------------- - +------ + ------ - |
//| 1 | Ionescu_Monica | 19 | 520.17|
//| 2 | Aionesei_Adrian_Ionel | 23 | 884.25|
//| 3 | Popescu_Gigel | 19 | 443.10|
//| 4 | Popescu_Maria | 28 | 1155.00|
//|---------------------------------------------- + ------ + ------ - |
//| Medie		 | 22.25 | 750.63 |
//-------------------------------------------------------------- -
#pragma warning(disable:4996)
#include <cstdio>
#include <stdlib.h>
#include <string.h>

struct Persoana
{
	int nrCrt;
	char nume[50];
	char prenume[50];
};

int main()
{
	int n,nrCrt = 0;
	printf("Intoduceti numarul de Persoane: "); scanf_s("%d", &n);
	struct Persoana *pers = (Persoana*)malloc(n * sizeof(Persoana));
	for (int i = 0; i < n; i++)
	{
		printf("nrCrt: %d\n", ++nrCrt);
		pers[i].nrCrt = nrCrt;
		printf("Nume:"); scanf("%49s", pers[i].nume);
		printf_s("Prenume:"); scanf("%49s", pers[i].prenume);
	}

	printf("---------------------------------------------------------------\n");
	printf("|Nr. | NUMELE SI PRENUMELE                     |Varsta|Salariu|\n");
	printf("|crt.|                                         |      |       |\n");
	printf("|----+-----------------------------------------+------+-------|\n");
	for (int i = 0; i < n; i++)
	{
		printf("|%4d|%-41s|%6d|%7d|\n", pers[i].nrCrt, strcat(strcat(pers[i].nume,"_"), pers[i].prenume), 321, 321);
	}
	printf("|----+-----------------------------------------+------+-------|\n");
	printf("|Medie                                         |      |       |\n");
	printf("---------------------------------------------------------------\n");

	getchar();
	getchar();
	return 0;
}