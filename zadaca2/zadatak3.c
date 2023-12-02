/*
ZADATAK 3. :Napisati program koji unosi realne brojeve sve dok se dva puta zaredom ne unesu brojevi 
            sa istim cijelim dijelom (npr. 3.76 i 3.421). Program ispisuje prosjek negativnih unesenih 
            brojeva, a ako nije unesen niti jedan negativan broj ispisuje poruku o tome.
*/

#include <stdio.h>

float broj = 0;
float zadnjiBroj = 0;

float zbrojNegativnihBrojeva = 0;
int kolicinaNegativnihBrojeva = 0;

int main()
{
    
    // koristimo do while zato sto na pocetku ce " broj " i " zadnjiBroj " imati isti cjeli dio 
    // ( mozemo koristiti obican while ako postavimo " broj "/ " zadnjiBroj " da ima drugu vrijedonst na pocetku npr. 1 i 0)
    do{
        zadnjiBroj = broj;
        
        // unosimo broj
        printf("Unesi realni broj: ");
        scanf("%f", &broj);
        
        // provjeravamo jeli " broj " negativan i ako je dodamo ga u " zbrojNegativnihBrojeva " i povecamo " kolicinaNegativnihBrojeva " za 1
        if(broj < 0){
            
            zbrojNegativnihBrojeva += broj;
            kolicinaNegativnihBrojeva++; 
        }
        
    }while( (int)broj != (int)zadnjiBroj );
    
    // ako je " kolicinaNegativnihBrojeva " jednaka nuli znaci da nije unjeti nijedan negativan broj pa samo ispisemo to 
    if(kolicinaNegativnihBrojeva == 0){
        
        printf("Nije bio unesen ni jedan negativan broj");
    }
    
    // ako to nije slucaj ispisemo " ( " zbrojNegativnihBrojeva " / " kolicinaNegativnihBrojeva " ) "
    else{
        
        printf("Prosjek svih unesenih negativnih brojeva je: %.2f", ( zbrojNegativnihBrojeva / kolicinaNegativnihBrojeva ));
    }

    return 0;
}
