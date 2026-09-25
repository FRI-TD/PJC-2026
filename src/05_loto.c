//
// Created by Predavanja on 25. 09. 2026.
//


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 80000

void izpisiTabelo(int t[], int n) {
    printf("[");
    for (int i=0; i<n; i++)
        printf("%d%s", t[i], i != n-1 ? ", " : "");
    printf("]");
}

// urejanje z mehurcki (BubbleSort)
void urediB(int t[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (t[j] > t[j+1]) {
                // zamenjava z uporabo pomozne spremenljivke
                //int tmp = t[j];
                //t[j]    = t[j+1];
                //t[j+1]  = tmp;

                //t[j]   = t[j] + t[j+1];
                //t[j+1] = t[j] - t[j+1];
                //t[j]   = t[j] - t[j+1];

                t[j]   = t[j] ^ t[j+1];
                t[j+1] = t[j] ^ t[j+1];
                t[j]   = t[j] ^ t[j+1];
            }
        }
    }
}

int main() {
    srand(time(NULL));
    int tab[N];
    int n=0; // stevilo ze vpisanih stevil v tabeli
    for (int i=0; i<N; i++) {
        int x = 1 + (rand() % 39);

        /*
        bool nasel = false;
        for (int j=0; j<i; j++)
            if (tab[j] == x) {
                nasel=true;
                break;
            }
        if (nasel) {i--; continue;}
        */

        tab[n++]=x;
    }

    clock_t start = clock();
    urediB(tab, n);
    clock_t end = clock();

    double cpu_time_used = (double) (end-start) / CLOCKS_PER_SEC;
    printf("Cas izvajanja: %.2fs\n", cpu_time_used);

    // izpisiTabelo(tab, n);
}