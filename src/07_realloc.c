//
// Created by Predavanja on 29. 09. 2026.
//


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define min(x,y) ((x) < (y) ? (x) : (y))

void rezerviraj(int **p, int stara_velikost, int nova_velikost) {
    int *np = malloc(nova_velikost * sizeof(int));
    memcpy(np, *p,  min(stara_velikost, nova_velikost) * sizeof(int));
    free(*p);
    *p = np;
}

int main() {
    int n= 100;
    int *p = malloc(n*sizeof(int));
    for (int i=0; i<n; i++) p[i] = i;

    rezerviraj(&p, n, 2*n);

    printf("99: %d, 100: %d\n", p[99], p[100]);

    free(p);
}