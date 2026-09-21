//
// Created by Predavanja on 21. 09. 2026.
//

#include <stdio.h>
#include <stdlib.h>

// Izracun stevila pi s pomocjo generatorja nakljucnih stevil
int main() {
    int n = 10000000; // stevilo vseh tock
    int t = 0;    // stevilo tock v krogu

    for (int i=0; i<n; i++) {
        double x = 1.0 * rand() / RAND_MAX;
        double y = 1.0 * rand() / RAND_MAX;

        // ali tocka (x,y) lezi v krogu?
        if (x*x + y*y < 1)
            t++;
    }

    double pi = 4.0 * t / n;

    printf("pi = %.7f\n", pi);
}
