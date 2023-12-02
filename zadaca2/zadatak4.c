/*
ZADATAK 4. :Napisati program koji unosi 20 slova engleskog alfabeta (velikih ili malih, zanemarujući 
            ostale unesene znakove). Program ispisuje broj samoglasnika i broj suglasnika.
*/

#include <stdio.h>

char slovo;

int brojSamoglasnika = 0, brojSuglasnika = 0;

int main()
{
    int i = 0;
    
    // while petlja traje dok ne unesemo 20 slovo iz abecede
    while( i < 20 ){
        
        //unosimo simbol
        printf("%d. Unesi slovo: ", i+1);
        scanf(" %c", &slovo);
        
        // provjeravamo jeli uneseni simbol slovo pomocu njegove ascii vrijednosti( A=65 ... Z=90 ) i ( a=97 ... z=122 )
        if( ( slovo > 64 && slovo < 91 ) || ( slovo > 96 && slovo < 123 )){
            
            // ako uneseni simboj jest slovo provjeravamo jeli samoglasnik ili sublasnik
            // i povecamo odgovarajucu varijablu
            switch(slovo){
                
                case 'A':
                case 'a':
                case 'E':
                case 'e':
                case 'I':
                case 'i':
                case 'O':
                case 'o':
                case 'U':
                case 'u':
                    brojSamoglasnika++;
                    break;
                    
                default:
                    brojSuglasnika++;
                    break;
            }
            
            // " i " povecamo unutar if-a zato sto zelimo zanemariti ako korisnik unese nesto drugo osim slova 
            i++; 
        }
    }
    
    // ispisemo koliko je samoglasnika i suglasnika
    printf("Uneseno je %d suglasnika i %d samoglasnika", brojSamoglasnika, brojSuglasnika);
    
    
    return 0;
}
