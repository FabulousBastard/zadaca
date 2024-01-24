/*
    ZADATAK 4. :Napisati program koji unosi cijeli broj i rekurzivnom funkcijom ima_li_5() provjerava je li 
                neka od njegovih znamenki 5. Rezultat se ispisuje u glavnom programu. 
*/

#include <stdio.h>

int ima_li_5(int n) {
    if (n == 0)
        return 0;
    else if (n % 10 == 5)
        return 1;
    else
        return ima_li_5(n / 10);
}

int main() {
    int broj;
    printf("Unesite cijeli broj: ");
    scanf("%d", &broj);

    if (ima_li_5(broj))
        printf("Broj %d sadrzi znamenku 5.\n", broj);
    else
        printf("Broj %d ne sadrzi znamenku 5.\n", broj);

    return 0;
}
