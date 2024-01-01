/*
	ZADATAK 3. :Napisati program koji u funkciji unos() unosi 20 cijelih brojeva, u funkciji prosjek() računa 
				njihov prosjek, a u funkciji najdalji() pronalazi uneseni broj najdalji od izračunatog
				prosjeka te ga ispisuje u glavnom programu.
*/

#include <stdio.h>
#include <math.h>

int brojevi[20] = {0};
int zbroj = 0;
float prosjek_ = 0;

void unos(){

	for (int i = 0; i < 20; ++i)
	{
		printf("Unesi broj: ");
		scanf("%d", &brojevi[i]);
	}
}

float prosjek(){

	for (int i = 0; i < 20; ++i)
	{
		zbroj += brojevi[i];
	}
	return ((float)zbroj / 20);
}

int najdalji() {

    int naj = brojevi[0];
    float razlika;
    float max_razlika = fabs(brojevi[0] - prosjek_);

    for (int i = 1; i < 20; i++) {

        razlika = fabs(brojevi[i] - prosjek_);
        if (razlika > max_razlika) {
            max_razlika = razlika;
            naj = brojevi[i];
        }
    }
    return naj;
}

int main()
{
	unos();
	printf("\nProsjek je: %.2f\n", prosjek());
	printf("Broj najudaljeniji od prosjeka je: %d\n", najdalji());
	
	
	scanf("%d", brojevi[0]);

	return 0;
}