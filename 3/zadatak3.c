/*
ZADATAK 3.  Napisati program koji unosi 20 realnih brojeva i ispisuje one čiji je cijeli nije barem 100 
			puta veći od njihovog decimalnog dijela. ( 20.3 => .3 x 100 > 20 => 30 > 20)
*/

#include <stdio.h>

float broj = 0;

int main()
{
	for(int i = 1; i < 21; i++){
		printf("Unesi %d broj: ", i);
		scanf("%f", &broj);

		if ( (broj - (int)broj)*100 < (int)broj )
		{
			printf("\n--- %f ---\n",broj);
		}
	}

	return 0;
}