/*
ZADATAK 2. :Napisati program koji unosi znakove sve dok se ne unese znak * i ispisuje koliko je od 
unesenih znakova samoglasnika, ne vodeći računa radi li se o malim ili velikim slovima.
*/

#include <stdio.h>

char uneseniSimbol = 'a';
int kolicinaSamoglasnika = 0;

int main()
{
    
    // while petlja ide dok uneseni simbol ne bude *
    while( uneseniSimbol != '*'){
        
        // unosimo simbol ( obrati paznju na "scanf(" %c", &uneseniSimbol);" ima razmak prije %c to je zbog ovog " https://stackoverflow.com/questions/14419954/reading-a-single-character-in-c ")
        printf("Unesi slovo: ");
        scanf(" %c", &uneseniSimbol);
        
        // provjeravamo jeli " uneseniSimbol " jedan od samoglasnika
        // ako je povecamo " kolicinaSamoglasnika " za jedan
        switch(uneseniSimbol){
            
            case 'A':
            case 'a':
                kolicinaSamoglasnika++;
                break;
                
            case 'E':
            case 'e':
                kolicinaSamoglasnika++;
                break;
                
            case 'I':
            case 'i':
                kolicinaSamoglasnika++;
                break;
                
            case 'O':
            case 'o':
                kolicinaSamoglasnika++;
                break;
                
            case 'U':
            case 'u':
                kolicinaSamoglasnika++;
                break;
        }
    }
    
    //ispisemo " kolicinaSamoglasnika "
    printf("Uneseno je %d samoglasnika", kolicinaSamoglasnika);

    return 0;
}
