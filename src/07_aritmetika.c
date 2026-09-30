//
// Created by Predavanja on 29. 09. 2026.
//


#include <stdio.h>

int main() {
    int tab[] = {1,2,3,4}; int MAX = 4;

    int *p;
    p = tab;

    while (p < tab + MAX) {
        printf("%p: %d\n", p, *p);
        p++;
    }

    char *pc = (char *) tab;
    pc++;
    printf("%c\n", *pc);

}