	/*
ZADATAK 1. Napisati program koji unosi cijele brojeve sve dok se četiri puta zaredom ne unese broj 
		   veći od 10. Program ispisuje broj koji je unesen najviše puta. 
*/

#include <stdio.h>
//#include <string.h> // za memset

int main()
{
	int kolBrVecihOdDeset = 0;
	int br = 0;
	int najCesciBr = 0;
	int max = 0;
	int uneseniBrojevi[2000] = {0};

	//memset(uneseniBrojevi, 0, sizeof(uneseniBrojevi)); 

	while( kolBrVecihOdDeset < 4 ){

		printf("Unesi broj: ");
		scanf("%d", &br);
		uneseniBrojevi[br]++;

		if(br > 10){
		    kolBrVecihOdDeset++;
		}else{
			kolBrVecihOdDeset = 0;
		}
	}
	
	for (int i = 0; i < 99; ++i)
		{
			if (uneseniBrojevi[i] > max)
			{
				najCesciBr = i;
				max = uneseniBrojevi[i];
			}
		}


	printf("Broj koji je unesen najvise puta je: %d\n", najCesciBr );
	scanf("%d",&br);

	return 0;
}
