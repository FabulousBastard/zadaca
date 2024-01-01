/*
	ZADATAK 1. :Napisati program koji u funkciji unos() unosi 50 slova, zanemarujući ostale slovoove, a 
				zatim u funkciji mali_samoglasnik() ispisuje koliko je od unesenih slova malih 
				samoglasnika.
*/

#include <stdio.h>

char slova[50];
int mala_slova = 0;

void unos(){

	int n = 0;
	char slovo;

	while( n < 50){

		printf("Unesi %d. slovo: ", n+1);
		scanf(" %c", &slovo);

		if (64 < slovo && slovo < 91 || 96 < slovo && slovo < 123)
		{
			slova[n] = slovo;
			n++;
		}
	}
}

void mali_samoglasnik(){

	for (int i = 0; i < 50; ++i)
	{
		switch(slova[i]){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':	
				mala_slova++;
				break;
		}
	}

	printf("Uneseno je: %d malih samoglasnika\n", mala_slova);
}

int main()
{

	unos();
	mali_samoglasnik();
	
	return 0;
}