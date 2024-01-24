/*
	ZADATAK 1. :Napisati program koji u funkciji unos() unosi kolBr cijelih brojeva, a zatim u jednoj funkciji 
				statistika() računa minimum i maksimum unesenih brojeva te aritmetičku sredinu svih 
				unesenih brojeva i ispisuje sve rezultate u glavnom programu.
*/

#include <stdio.h>

#define kolBr 10

void unos(int* niz){

	for (int i = 0; i < kolBr; ++i)
	{
		scanf("%d", &niz[i]);
	}
}

void statistika(int* niz){

	int min = niz[0], max = niz[0], zbroj = 0;
	float pros = 0;

	for (int i = 0; i < kolBr; ++i)
	{
		if (niz[i] > max)
		{
			max = niz [i];
		}
		else if (niz[i] < min)
		{
			min = niz [i];
		}

		zbroj += niz[i];
	}

	pros = (float)zbroj / kolBr;

	printf("minimum  == %d\n", min);
	printf("maksimum == %d\n", max);
	printf("prosjek  == %.2f\n", pros);
}

int main(int argc, char const *argv[])
{
	int brojevi[kolBr];

	unos(brojevi);
	statistika(brojevi);

	scanf("%d", &brojevi[1]);

	return 0;
}