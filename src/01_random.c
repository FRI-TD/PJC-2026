//
// Created by Predavanja on 21. 09. 2026.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    for (int i=0; i<5; i++) {
        int x = rand();
        printf("%d ", x);
    }
    printf("\n");
}