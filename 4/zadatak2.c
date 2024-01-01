/*
	ZADATAK 2. :Napisati program koji unosi realne brojeve sve dok se ne unese broj veći od zbroja do tada 
				unesenih brojeva, a zatim u funkciji ispis_manjih_od_prosjeka() ispisuje one brojeve koji 
				su manji od prosjeka svih unesenih brojeva.
*/

#include <stdio.h>

float brojevi[100] = {0};
float broj = 0;
float zbrojBrojeva = 0;
float prosjek = 0;
int n = 0;

void ispis_manjih_od_prosjeka(){

	prosjek = zbrojBrojeva / n;

	printf("brojevi manji od prosjeka su: ");

	for (int i = 0; i < n; ++i)
	{
		if (brojevi[i] < prosjek)
		{
			printf("%.2f, ", brojevi[i]);
		}
	}
}

int main()
{

	printf("Unesi broj: ");
	scanf("%f", &broj);
	brojevi[n] = broj;
	zbrojBrojeva += broj;
	n++;

	while(1){
		printf("Unesi broj: ");
		scanf("%f", &broj);
		brojevi[n] = broj;
		zbrojBrojeva += broj;
		n++;
		if (broj > zbrojBrojeva - broj)
		{
			break;
		}
	}

	ispis_manjih_od_prosjeka();

	scanf("%f", &broj);

	return 0;
}