//
// Created by Predavanja on 23. 09. 2026.
//


#include <stdio.h>

int main() {
    int mesec;
    scanf("%d", &mesec);
    int steviloDni;

    switch (mesec) {
        case 2:
            steviloDni=28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            steviloDni=30;
            break;
        default:
            steviloDni=31;
    }
    printf("Mesec %d ima %d dni\n", mesec, steviloDni);
}