/*
ZADATAK 5. :Napisati program koji unosi dekadski cijeli broj dcb iz intervala [0, 255] te ispisuje zapis 
            dekadskog broja dcb u bazama 2, 8 i 16. 
*/

#include <stdio.h>
#include <math.h>

int dcb = 0;

int binarni[8], octa[3];

int main()
{
    printf("Unesi cjeli broj u intervalu 0 - 255: ");
    scanf("%d", &dcb);
     int dcbCopy = dcb;
    

    //bin

    for(int i = 7; i >= 0; i--){
        
        binarni[i] = dcb %  2;
        dcbCopy = dcbCopy / 2;
    }

    for(int i = 0; i < 8; i++){
        
        printf("%d", binarni[i]);
    }
    
    //-----------------------
    
    dcbCopy = dcb;
    
    //octa
 
        for(int i = 3; i >= 0; i--){
        
        octa[i] = dcb %  8;
        dcb = dcb / 8;
    }

    for(int i = 0; i < 3; i++){
        
        printf("%d", octa[i]);
    }

 
    return 0;
}
