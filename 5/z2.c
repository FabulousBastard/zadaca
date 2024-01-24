/*
	ZADATAK 2. :Napisati program koji unosi znakove sve dok se tri puta zaredom ne unese samoglasnik 
				(ne vodeći računa je li mali ili veliki), a zatim u funkciji obrada() pronalazi onaj znak koji 
				je unesen najviše puta i broj njegovih ponavljanja te ih ispisuje u glavnom programu.
*/

#include <stdio.h>


void obrada(int* niz){

	int kol = 0;
	int najcesci = 0;

	for (int i = 32; i < 255; ++i)
	{
		if (niz[i] > kol)
		{
			najcesci = i; 
			kol = niz[i];
		}

		//printf(" znak %c kolicia %d  ||  najcesci %c kol %d \n", i, niz[i], najcesci, kol);
	}

	printf("znak _%c_ se ponavlja %d puta\n", najcesci, kol);
}

int main()
{
	int cestostZnakova[255] = {0};
	int brSamoglasnika = 0;
	char c = 0;

	while(brSamoglasnika < 3){

		scanf("%c", &c);
		switch(c){
			case 'a':
			case 'i':
			case 'u':
			case 'e':
			case 'o':
				brSamoglasnika++;
				break;
		}
		cestostZnakova[c]++;	
	}

	obrada(cestostZnakova);

	scanf("%d", cestostZnakova[1]);

	return 0;
}