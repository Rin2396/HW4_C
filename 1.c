#include <stdio.h>

int main() {
    int mon, year;
    scanf("%d %d", &mon, &year);
    if (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12) { // месяцы, в которых по 31 дн.
        printf("%d", 31);
    }
    else if (mon == 4 || mon == 6 || mon == 9 || mon == 11) { // месяцы, в которых по 30 дн.
        printf("%d", 30);
    }
    else if (mon == 2) { // февраль
        if ((year % 4) == 0 && (year % 4000) != 0 && ((year % 100) != 0 || (year % 400) == 0)) { // если год високосный
            printf("%d", 29);
        }
        else { // если не високосный
            printf("%d", 28);
        }
    }
}