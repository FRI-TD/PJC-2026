//
// Created by Predavanja on 29. 09. 2026.
//


#include <stdio.h>

typedef void uredi(int *, int);

void bubbelSort(int t[], int n) {
    printf(".... urejanje z mehurcki");
}

void insertionSort(int t[], int n) {
    printf(".... urejanje z vstavljanjem");
}


int main() {
    printf("Katero urejanje naj uporabim (0...bubble, 1...insertion): ");
    int u; scanf("%d", &u);

    uredi *ur; // funkcija urejanja
    if (u == 0)
        ur = bubbelSort;
    else
        ur = insertionSort;

    int t[] = {1,2,3};
    ur(t, 3);
}