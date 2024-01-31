/*
	ZADATAK 1. :Napisati program koji unosi 20 znakova i u funkciji ispis() ispisuje ih na način da za svako 
				malo slovo engleskog alfabeta ispiše odgovarajuće veliko i obratno, dok sve znakove koji 
				nisu slova engleskog alfabeta ispisuje kako su i uneseni. Dodatno, za svaki znak u 
				zagradama, iza ispisanog znaka, ispisuje i njegov ASCII kod.

*/

#include <stdio.h>

#define br 10

void ispis( char* nizz ){

	for (int i = 0; i < br; ++i)
	{
		if (nizz[i] >= 'a' && nizz[i] <= 'z')
		{
			printf("\n%c (%d) - %c (%d)\n",nizz[i], nizz[i], nizz[i]-32, nizz[i]-32 );
		}
		else if (nizz[i] >= 'A' && nizz[i] <= 'Z')
		{
			printf("\n%c (%d) - %c (%d)\n",nizz[i], nizz[i], nizz[i]+32, nizz[i]+32 );
		}
		else{
			printf("\n%c (%d)", nizz[i], nizz[i]);
		}
	}
}

int main()
{
	char znakovi[br];

	for (int i = 0; i < br; ++i)
	{
	    //fflush(stdin);
		scanf(" %c", &znakovi[i]);
	}
	
	ispis(znakovi);

	scanf("%c", &znakovi[0]);

	return 0;
}
