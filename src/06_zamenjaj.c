//
// Created by Predavanja on 28. 09. 2026.
//


#include <stdio.h>

// funkcija med seboj zamenja vrednosti
// parametrov x in y
void zamenjaj(int *x, int *y) {
  printf("x=%d, y=%d\n", *x, *y);
  int tmp = *x;
  *x = *y;
  *y = tmp;
  printf("x=%d, y=%d\n", *x, *y);
}

int main() {
    int a = 5; int b = 10;
    printf("a=%d, b=%d\n", a, b);

    zamenjaj(&a,&b);
    printf("a=%d, b=%d\n", a, b);
}