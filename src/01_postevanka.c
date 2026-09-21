//
// Created by Predavanja on 21. 09. 2026.
//

#include <stdio.h>

int main() {
    int i, j;

    printf("    ");
    for (i=1; i<=10; i++) {
        printf(" %3d ", i);
    }
    printf("\n    ");
    for (i=0; i<50; i++) printf("-");
    printf("\n");

    for (i=1; i<=10; i++) {
        printf("%2d |", i);
        for (j=1; j<=10; j++) {
            printf(" %3d ", i*j);
        }
        printf("\n");
    }

}