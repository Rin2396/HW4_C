#include <stdio.h>

int main() {
  int chislo, sum = 0, k = 0;
  double sr_arif;
  while (chislo != 0) { // пока не 0
    scanf("%d", &chislo); // вводим
    sum = sum + chislo; // суммируем
    k++; // считаем количество
  }
  sr_arif = (double)sum / (double)(k-1); // считаем ср.арифметическое
  printf("%f", sr_arif); // выводим получившееся число и радуемся жизни;)
}