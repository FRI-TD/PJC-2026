//
// Created by Predavanja on 22. 09. 2026.
//

#include <stdio.h>

int main() {
    int starost=0;

    printf("Vpisi starost: ");
    scanf("%d", &starost);

    char ime[5];
    printf("Vpisi ime:");
    //scanf("%s", ime);
    fgets(ime, 5, stdin);
    fgets(ime, 5, stdin);  // prebere celo vrstico


    printf("Pozdravljen, %s, star si %d let\n", ime, starost);
}