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
	char *prenume;
};

int main()
{
	int n,nrCrt = 0;
	//printf_s("Intoduceti numarul de Persoane: "); scanf_s("%d", &n);
	struct Persoana newPers;
	printf_s("nrCrt: %d\n", ++nrCrt);
	printf_s("Nume:"); gets_s(newPers.nume);
	newPers.prenume = (char*)malloc(50 * sizeof(char));
	printf_s("Prenume:"); scanf("%49s", newPers.prenume);
	printf_s("%s %s", newPers.nume, newPers.prenume);
	getchar();
	getchar();
	return 0;
}