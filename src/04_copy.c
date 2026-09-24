//
// Created by Predavanja on 24. 09. 2026.
//


#include <stdio.h>

// kopira prvi_argument v drugi_argument
int main(int argc, char *args[]) {
    if (argc != 3) {
        printf("Napaka!\n");
        return 1;
    }

    FILE *f_in, *f_out; // vhodna in izhodna datoteka
    f_in   = fopen(args[1], "r");
    f_out  = fopen(args[2], "w");

    if (f_in == NULL || f_out == NULL) {
        printf("Ne morem odpreti daototek \n");
        return 2;
    }

    int z;
    while (!feof(f_in)) {
        z = fgetc(f_in);
        if (z != EOF)
          fputc(z,f_out);
    }

    fclose(f_in);
    fclose(f_out);
}