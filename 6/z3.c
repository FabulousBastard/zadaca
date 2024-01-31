/*
	ZADATAK 3. :Napisati program koji u funkciji unos() unosi 20 cijelih brojeva, u funkciji plus_minus()
				raspoređuje ih u dva niza brojeva, tj. pozitiven smješta u jedan, a negativne u drugi niz. 
				Oba niza ispisuju se u glavnom programu.
*/

#include <stdio.h>

#define kol 10

void unos(int* br){

	for (int i = 0; i < kol; ++i)
	{
		scanf("%d", &br[i]);
	}

}

void plus_minus(int* br, int* poz, int* neg){

	int brpoz = 0, brneg = 0;

	for (int i = 0; i < kol; ++i)
	{
		if (br[i] > 0)
		{
			poz[brpoz] = br[i];
			brpoz++;
		}
		else if (br[i] < 0)
		{
			neg[brneg] = br[i];
			brneg++;
		}
	}

}

int main()
{
	int brojevi[kol],pozitivniBr[kol] = {0}, negativniBr[kol] = {0};

	unos(brojevi);
	plus_minus(brojevi, pozitivniBr, negativniBr);

	printf("pozitivni brojevi su: ");

	for (int i = 0; i < kol; ++i)
	{
		if (pozitivniBr[i] > 0)
		{
			printf("%d, ", pozitivniBr[i]);
		}
	}

	printf("\nnegativni brojevi su: ");

	for (int i = 0; i < kol; ++i)
	{
		if (negativniBr[i] < 0)
		{
			printf("%d, ", negativniBr[i]);
		}
	}

	return 0;
}