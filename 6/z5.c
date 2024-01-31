/*
	ZADATAK 5. :Napisati program koji unosi 20 znakova i rekurzivnom funkcijom jesu_li_mala_slova()
				provjerava jesu li svi unesenih znakovi velika slova engleskog alfabeta. Rezultat se ispisuje 
				u glavnom programu.
*/

#include <stdio.h>

#define kol 10

int jesu_li_mala_slova(char* znakovi, int n){

	if (n < 0)
	{
		return 1;
	}
	if (znakovi[n] >= 'a' && znakovi[n] <= 'z')
	{
		return jesu_li_mala_slova(znakovi, n-1);
	}
	else{
		return 0;
	}
}

int main()
{
	char znak[kol];

	for (int i = 0; i < kol; ++i)
	{
		scanf(" %c", &znak[i]);
	}

	if (jesu_li_mala_slova(znak, kol-1) == 1)
	{
		printf("svi znakovi su mala slova eng. abecede\n");
	}
	else{

		printf("nisu svi znakovi mala slova eng. abecede\n");	
	}

	return 0;
}