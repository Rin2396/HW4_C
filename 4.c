#include <stdio.h>
#include <stdlib.h>



void dec_bin(int chislo) {
    if (chislo / 2 != 0) { // пока не 0
        dec_bin(chislo / 2); // делим число на 2 и снова проводим функцию сначала, потом снова делим и т.д.
    }
    chislo = chislo % 2; // чтобы выводил не число и делители, а только остатки от деления числа на 2 (1 или 0)
    printf("%d", chislo); 
}

int main() { 
    int n;
    scanf("%d", &n);
    if (n < 0) { // если число отрицательное
        printf("-");
    }
    n = abs(n); // делаем число положительным
    dec_bin(n); // проводим все те же махинации))
}