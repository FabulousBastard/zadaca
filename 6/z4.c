/*
	ZADATAK 4. :Napisati program koji unosi realne brojeve sve dok zadnji uneseni broj ne bude jednak 
				nekom od ranije unesenih brojeva. Nakon toga program u funkciji ispis() ispisuje one 
				brojeve čiji je cijeli dio 100 ili više puta veći od decimalnog dijela.
*/

#include <stdio.h>


int brojVecUnesen(int br, int n, float* brojevi){

	for (int i = 0; i < n-1; ++i)
	{
		if (brojevi[i] == br)
		{
			return 1;
		}
	}
	return 0;
}

void ispis(float* brojevi, int n){
	printf("brojevi kojima je cjeli dio veci barem 100 puta od decimalnog su:\n");
	for (int i = 0; i < n; ++i)
	{
		if ((int)brojevi[i] > (brojevi[i]-(int)brojevi[i])*100 )
		{
			printf("%f, ", brojevi[i]);
		}
	}
}

int main()
{
	int n = 0;
	float brojevi[100];

	while(1){

		scanf("%f", &brojevi[n]);
		n++;
		if (brojVecUnesen(brojevi[n-1], n, brojevi)){

			break;
		}
	}

	ispis(brojevi, n);

	return 0;
}