//
// Created by Predavanja on 23. 09. 2026.
//


#include <stdio.h>

int main() {
    int tab[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    printf("%d\n", tab[0][0]); // 1
    printf("%d\n", tab[0][4]); // 5

    int *t = (int *) tab;
    t[2*3+2] = 10; // tab[2][2]
    printf("%d\n", tab[2][2]);



}