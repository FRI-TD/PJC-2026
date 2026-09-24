//
// Created by Predavanja on 24. 09. 2026.
//


#include <stdio.h>

int main() {
    int a=7, b=-1, c=2, d=5;
    if (a+a && ++b && c-- || d++) d=7;
    printf("%d %d %d %d\n", a, b, c, d);
}