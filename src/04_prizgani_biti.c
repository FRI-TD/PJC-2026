//
// Created by Predavanja on 24. 09. 2026.
//


#include <stdio.h>

int stevilo_prizganih(int x) {
    int r = 0;
    while (x > 0) {
        r += (x&1); // if (x & 1) r++;
        x = x >> 1;
    }
    return r;
}

int stevilo_prizganih_div(int x) {
    int r = 0;
    while (x > 0) {
        r += (x%2);
        x = x / 2;
    }
    return r;
}

int stevilo_prizganih_sub(int x) {
    int r;
    for (r=0; x>0; r++)
        x = x & (x-1);
    return r;
}


int main() {
    int x = 42;
    printf("Stevilo prizganih bitov v %d je %d\n", x, stevilo_prizganih(x));
    printf("Stevilo prizganih bitov v %d je %d\n", x, stevilo_prizganih_div(x));
    printf("Stevilo prizganih bitov v %d je %d\n", x, stevilo_prizganih_sub(x));
}