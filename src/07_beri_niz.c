//
// Created by Predavanja on 29. 09. 2026.
//


#include <stdio.h>
#include <stdlib.h>

char * preberiBesedo() {
    char *niz = malloc(100 * sizeof(char));
    scanf("%s", niz);
    return niz;
}

void preberi(char *niz) {
  scanf("%s", niz);
}

int main() {
    char *beseda = preberiBesedo();
    printf("Prebrana beseda: %s\n", beseda);

    char *niz = malloc(100*sizeof(char));
    preberi(niz);
    free(niz);
}