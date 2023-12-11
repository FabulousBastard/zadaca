/*
ZADATAK 4.  Napisati program koji unosi znakove sve dok se ne unese znak 'x' i zatim ih ispisuje tako 
			da svaki znak koji nije slovo zamijeni njegovim ASCII kodom. Slova ispisuje onako kako su 
			unesena.
*/

#include <stdio.h>

char znak = 0;

int main()
{
	while(znak != 'x'){

		printf("Unesi znak: ");
		scanf(" %c", &znak);

		if (64 < znak && znak < 91 || 96 < znak && znak < 123)
		{
			printf("Slovo je: %c\n", znak);

		}else{
			printf("ASCII vrijednost znaka je: %d\n", znak);
		}
	}


	return 0;
}