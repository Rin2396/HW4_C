#include <stdio.h>

int main() {
    int n, kolichestvo_pos = 0, chislo;
    scanf("%d", &n); // обозначаем количество чисел
    for (int i = 0; i < n; i++) {
        scanf("%d", &chislo); // вводим
        if (chislo > 0) { // если положительное
            kolichestvo_pos++; // плюсуем к счетчику положительных +1
        }
    }
    printf("%d", kolichestvo_pos); // выводим
}