/*
ZADATAK 1. :Napisati program koji za uneseni prirodni broj ispisuje poruku radi li se o složenom broju, 
            te ako se radi o složenom broju (broju koji nije prost) i koji je zbroj svih njegovih djelitelja 
            (npr. djelitelji broja 18 su 1, 2, 3, 6, 9, i 18 pa je njihov zbroj 39).
*/

#include <stdio.h>

int broj, zbrojDjeljitelja = 0;

int main()
{
    // pitamo korisnika da unese broj i spremimo ga u varijablu " broj "
    printf("Unesi prirodan broj: ");
    scanf("%d/n", &broj);
    
    
    // u for petlji idemo od broja 2 (jer i prosti brojevi su djeljivi s 1) do broja kojeg je korisnik upisao -1 (jer svaki broj je djeljiv sa sobom)
    for(int i = 2; i < broj ; i++){
        
        
        // u if-u provjeravamo jeli " broj " podjeljen s trenutasnjom vrijednoscu " i " jednak 0
        // i ako je to znaci da je broj slozen i da je " i " jedan od njegovih faktora
        
        // dodamo " i " u " zbrojDjeljitelja " i ispisemo ga (nije potrebno ispisat ali volim vidjeti sve faktore (iskljucujuci 1 i sam " broj "))
        if(broj % i == 0){
            zbrojDjeljitelja+=i;
            printf("%d\n", i);
        }
    }
    
    // u ovom ifu provjeravamo jeli " zbrojDjeljitelja " jednak 0, ako je to znaci da " broj " nije imao druge djeljitelje osim 1 i samoga sebe,
    // aka broj je prost
    if(zbrojDjeljitelja == 0){
        printf("broj nije slozen nego je prost");
    }
    
    // ako vrijednost " zbrojDjeljitelja " nije 0 onda ispisemo " ( zbrojDjeljitelja + 1 + " broj ") "
    else{
        
        printf("broj je slozen i zbroj njegovih djelitelja je: %d", (zbrojDjeljitelja + 1 + broj));
    }
    
    
    

    return 0;
}
