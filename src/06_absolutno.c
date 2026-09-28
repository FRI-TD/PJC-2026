//
// Created by Predavanja on 28. 09. 2026.
//


#include <stdio.h>

int main() {
     int x = 10;
     printf("%p\n", &x);

     int *p;
     p =  &x; //(int *) 0x7fff54c8a65c;
     *p = 15;

     char *q;
     q  = (char *) &x;
     q++;
     *q = 15;

     printf("x=%d\n", x);

     float f = 3.14;
     int i = f;
     printf("%d", i);

}