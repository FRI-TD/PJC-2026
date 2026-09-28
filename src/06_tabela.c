//
// Created by Predavanja on 28. 09. 2026.
//


#include <stdio.h>

int main() {
    int t[] = {1,2,3,4,5};
    printf("%d %d\n", t[0], t[1]);

    *t = 20;
    *(t+4) = 100;
    printf("t[4] = %d\n", t[4]);

    int *p  = t;

    *p     = 7;
    *(p+1) = 8;

    printf("%d %d\n", t[0], t[1]);

    p  = p+3;
    *p = 15;
    *(p-1) = 20;
    printf("%d %d\n", t[2], t[3]);

    p[0] = 30; // *p = 30;
    p[2] = 3;  // *(p+2)=3;
}