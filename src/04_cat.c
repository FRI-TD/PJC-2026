//
// Created by Predavanja on 24. 09. 2026.
//


#include <stdio.h>
#include <string.h>

void izpisi(FILE *f) {
    while (!feof(f)) {
        int z = getc(f);
        if (z != EOF)
            printf("%c", z);
    }
}

// izpise vsebino podanih datotek oziroma stdin, ce datoteke niso podane
int main(int argc, char *args[]) {
    if (argc == 1) { // ni argumentov
        izpisi(stdin);
    } else {
        char izpis[1000] = "";
        char izpis_ena[100];

        for (int i=1; i<argc; i++) {
            FILE *f; // datoteka iz katere beremo
            f = fopen(args[i], "r");
            if (f != NULL) {
                izpisi(f);
                fclose(f);
            } else {
                sprintf(izpis_ena,"cat: %s: No such file or directory\n", args[i]);
                strcat(izpis, izpis_ena);
            }
        }
        printf("%s", izpis);
    }
}