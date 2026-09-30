//
// Created by Predavanja on 29. 09. 2026.
//


#include <stdio.h>
#include <stdlib.h>
#define n 10

int primerjalnik(const void *a, const void * b) {
    int p1 = *(int *)a;
    int p2 = *(int *)b;

    if (p1 < p2)
        return -1;
    else if (p1 > p2)
        return 1;
    else
        return 0;

    // return p1-p2;
}

typedef struct {
    double re;
    double im;
} cplx;

// primerja kompleksni stevili po absolutni vrednosti
int primerjajCplx(const void *a, const void *b) {
    cplx *z1 = (cplx *)a;
    cplx *z2 = (cplx *)b;

    return (int)100*((z1->re*z1->re + z1->im*z1->im) - (z2->re*z2->re + z2->im*z2->im));
}

int main() {
    int *t = malloc(n*sizeof(int));
    for (int i=0; i<n; i++) t[i]= rand() %100;

    qsort(t, n, sizeof(int), primerjalnik);
    for (int i=0; i<n; i++) {
        printf("%d ", t[i]);
    }
    printf("\n");

    free(t);
}