/*
	ZADATAK 2. :Napisati program koji unosi cijele brojeve sve dok se ne unese prost broj, u funkciji 
				najmanji() pronalazi najmanji, a u funkciji najveci() najveći uneseni broj, a zatim u funkciji 
				svi_slozeni() ispisuje sve složene prirodne brojeve između najmanjeg i najvećeg unesenog 
				broja.
*/

#include <stdio.h>

int brojProst(int br){

	int rez = 1;

	for (int i = 2; i < br; ++i)
	{
		if (br%i == 0 )
		{
			rez = 0;
		}
	}
	return rez;
}

int najmanji(int* brojevi, int n){

	int najm = brojevi[0];

	for (int i = 0; i < n; ++i)
	{	
		if (brojevi[i] < najm)
		{
			najm = brojevi[i];
		}
	}

	return najm;
}

int najveci(int* brojevi, int n){

	int najv = brojevi[0];

	for (int i = 0; i < n; ++i)
	{	
		if (brojevi[i] > najv)
		{
			najv = brojevi[i];
		}
	}

	return najv;
}

void svi_slozeni(int* brojevi, int n, int najm, int najv){

	printf("Svi slozeni brojevi su: ");

	for (int i = 0; i < n; ++i)
	{	
		if (!brojProst(brojevi[i]) && brojevi[i] > najm && brojevi[i] < najv)
		{
			printf("%d, ", brojevi[i]);
		}
	}
}

int main()
{
	int brojevi[100], n = 0;

	int najm, najv;

	while(1){

		scanf("%d", &brojevi[n]);
		n++;

		if(brojProst(brojevi[n-1]))
		{
			break;
		}
	}

	najm = najmanji(brojevi, n);
	najv = najveci(brojevi, n);


	printf("Najmanji broj je %d\n", najm);
	printf("Najveci broj je %d\n", najv);
	svi_slozeni(brojevi, n, najm, najv);

	return 0;
}