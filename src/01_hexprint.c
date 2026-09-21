//
// Created by Predavanja on 21. 09. 2026.
//

#include <stdio.h>

int main() {
    char niz[15] = "01234 ABC test";

    int i;
    for (i=0; i<14; i++) {
      printf("%X ", niz[i]);
    }

    printf(" | ");
    for (i=0; i<14; i++) {
        printf("%c ", niz[i]);
    }
    printf(" | ");
}