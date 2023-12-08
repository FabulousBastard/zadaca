/*
ZADATAK 1. Napisati program koji unosi cijele brojeve sve dok se četiri puta zaredom ne unese broj 
		   veći od 10. Program ispisuje broj koji je unesen najviše puta. 
*/

#include <stdio.h>
#include <string.h> // za memset

int main()
{
	int kolBrVecihOdDeset = 0;
	int br = 0;
	int najveciBr = 0;
	int uneseniBr[100];

	memset(uneseniBr, 0, sizeof(uneseniBr)); 

	while(kolBrVecihOdDeset < 4){

		printf("Unesi broj: ");
		scanf("%d", &br);
		uneseniBr[br]++;
		
		if(br > 10){
		    kolBrVecihOdDeset++;
		}
	}
	
	for (int i = 0; i < 99; ++i)
		{
			if (uneseniBr[i] > najveciBr)
			{
				najveciBr = i;
			}
		}


	printf("Broj koji je unesen najvise puta je: %d\n", najveciBr );
	scanf("%d",&br);

	return 0;
}