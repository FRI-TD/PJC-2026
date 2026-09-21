//
// Created by Predavanja on 21. 09. 2026.
//

#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Stevilo argumentov: %d\n", argc);

    for (int i=0; i<argc; i++) {
        printf("%d. %s\n", i, argv[i]);
    }
}