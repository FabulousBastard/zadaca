	/*
ZADATAK 1. Napisati program koji unosi cijele brojeve sve dok se četiri puta zaredom ne unese broj 
		   veći od 10. Program ispisuje broj koji je unesen najviše puta. 
*/

#include <stdio.h>

int main()
{
	int uneseniBrojevi[1000] = {0};

	int kolBrVecihOdDeset = 0;
	int kolBr = 0;
	
	int br = 0;

	int najCesciBr = 0;
	int max = 0;
	int brojilo=0;


	while( kolBrVecihOdDeset < 4 ){

		printf("Unesi broj: ");
		scanf("%d", &br);
		uneseniBrojevi[kolBr] = br;


		if(br > 10){
		    kolBrVecihOdDeset++;
		}else{
			kolBrVecihOdDeset = 0;
		}
		kolBr++;
	}
	for (int i = 0; i < kolBr; ++i)
	{
		for (int j = 0; j < kolBr; ++j)
		{
			if (uneseniBrojevi[i] == uneseniBrojevi[j])
			{
				brojilo++;
			}

			if (brojilo > max)
			{
				max = brojilo;
				najCesciBr = uneseniBrojevi[i];
			}
		}
			brojilo = 0;
	}

	printf("Broj koji je unesen najvise puta je: %d\n", najCesciBr );
	scanf("%d",&br);

	return 0;
}
