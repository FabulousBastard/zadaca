/*
ZADATAK 5.  Napisati program koji unosi četiri prirodna broja te računa i ispisuje njihov najveći 
			zajednički djelitelj (najveći prirodni broj s kojim su djeljiva sva četiri unesena broja).

*/

#include <stdio.h>

int brojevi[4];
int najmanjiBr = 0;
int nzd = 0;

int main()
{
	for (int i = 0; i < 4; ++i)
	{
		printf("Unesi %d. broj: ", (i+1));
		scanf("%d",&brojevi[i]);
		if (najmanjiBr == 0 || brojevi[i] < najmanjiBr)
		{
			najmanjiBr = brojevi[i];
		}
	}

	for (int i = 1; i <= najmanjiBr; i++){

		if (brojevi[0]%i == 0 && brojevi[1]%i == 0 && brojevi[2]%i == 0 &&brojevi[3]%i == 0)
		{
			nzd = i;
		}
	}

	printf("Najveci zajednicki djeljitelj brojeva { %d, %d, %d, %d} je: %d\n", 
		brojevi[0], brojevi[1], brojevi[2], brojevi[3], nzd);

	scanf("%d",&nzd);

	return 0;
}