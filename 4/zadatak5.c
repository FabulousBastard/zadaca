/*
	ZADATAK 5. :Napisati program koji unosi pet realnih brojeva i u funkciji cetvrti_po_velicini() pronalazi 
				onog od njih koji je četvrti po veličini te ga ispisuje u funkciji ispis() onoliko puta koliki je 
				njegov cijeli dio.
*/

#include <stdio.h>

float brojevi[5];

float cetvrti_po_velicini(){

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if (brojevi[i] < brojevi[j])
			{
				float temp; 
    			temp = brojevi[i];    
    			brojevi[i] = brojevi[j];     
    			brojevi[j] = temp;   
			}
		}
	}
}

void ispis(){

	int n = brojevi[3];

	while(n != 0)
	{
		printf("%.2f\n", brojevi[3]);
		n--;
	}


}

int main()
{

	for (int i = 0; i < 5; ++i)
	{
		printf("Unesi broj: ");
		scanf(" %f", &brojevi[i]);
	}
	
	cetvrti_po_velicini();

	printf("--------------------------\n");

	ispis();

	scanf("%f", brojevi[0]);


	return 0;
}