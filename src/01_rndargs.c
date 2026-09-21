//
// Created by Predavanja on 21. 09. 2026.
//

#include <stdio.h>
#include <stdlib.h>

// Izpis argumentov v naključnem vrstnem redu
int main(int argc, char *args[]) {
    int k = argc-1; // koliko argumentov moramo se izpisati

    while (k > 0) {
        int x = 1 + (rand() % (argc-1));
        if (args[x] != NULL) {
            printf("%s\n", args[x]);
            args[x] = NULL;
            k--;
        }
    }
}