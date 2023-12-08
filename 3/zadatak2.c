/*
ZADATAK 2. Napisati program koji unosi znakove sve dok se zaredom ne unesu mala slova 'k', 'r', 'a' i 
		   'j' (ne računajući ENTER). Program ispisuje koliko je puta unesen svaki od samoglasnika 
		   (bez obzira radi li se o velikom ili malom slovu). 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int kolicinaA = 0;
	int kolicinaE = 0;
	int kolicinaI = 0;
	int kolicinaO = 0;
	int kolicinaU = 0;

	char temp = 0, slovo1 = 0, slovo2 = 0, slovo3 = 0, slovo4 = 0;

	while(!(slovo1 == 'j' && slovo2 == 'a' && slovo3 == 'r' && slovo4 == 'k')){
        
        printf("Unesi slovo: ");
        scanf(" %c", &temp);
        
        switch(slovo1){
            
            case 'A':
            case 'a':
            	kolicinaA++;
                break;
            case 'E':
            case 'e':
            	kolicinaE++;
                break;
            case 'I':
            case 'i':
            	kolicinaI++;
                break;
            case 'O':
            case 'o':
            	kolicinaO++;
                break;
            case 'U':
            case 'u':
                kolicinaU++;
                break;
            default:
            	break;
        }

        slovo4 = slovo3;
        slovo3 = slovo2;
        slovo2 = slovo1;
        slovo1 = temp;

        printf("\nslovo1:%c\n", slovo1);
        printf("slovo2:%c\n", slovo2);
        printf("slovo3:%c\n", slovo3);
        printf("slovo4:%c\n", slovo4);



        printf("----------------------\n");
    }

    printf("samoglsnik 'A' je upisan: %d puta\n", kolicinaA);
    printf("samoglsnik 'E' je upisan: %d puta\n", kolicinaE);
    printf("samoglsnik 'I' je upisan: %d puta\n", kolicinaI);
    printf("samoglsnik 'O' je upisan: %d puta\n", kolicinaO);
    printf("samoglsnik 'U' je upisan: %d puta\n", kolicinaU);

    scanf(" %c", &slovo1);		

	return 0;
}		