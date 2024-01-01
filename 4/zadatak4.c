/*
	ZADATAK 4. :Napisati program koji unosi 100 znakova i u funkciji ispis() ispisuje samo one unesena slova 
				koja se ponavljaju točno tri puta.
*/

#include <stdio.h>

char znakovi[100];
char znak;
int cestostZnakova[255] = {0};

void ispis(){

	for (int i = 0; i < 255; ++i)
	{
		if (cestostZnakova[i] == 3)
		{
			if (64 < i && i < 91 || 96 < i && i < 123)
			{
				printf("%c\n", i);
			}
		}
	}
}

int main()
{
	for (int i = 0; i < 10; ++i)
	{
		printf("Unesi znak: ");
		scanf(" %c", &znak);
		cestostZnakova[znak]++;
	}

	ispis();

	scanf(" %c", &znak);

	return 0;
}