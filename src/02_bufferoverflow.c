//
// Created by Predavanja on 22. 09. 2026.
//

// preberemo dva podatka in skusamo z drugim v
// pomnilniku prepisati prvega

#include <stdio.h>

int main() {
    int starost;
    char ime[5];

    printf("Vpisi starost: ");
    scanf("%d", &starost);

    printf("Vpisi ime: ");
    scanf("%s", ime);



    printf("Ime: %s, starost: %d\n", ime, starost);
}