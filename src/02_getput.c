//
// Created by Predavanja on 22. 09. 2026.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    int c;

    // za uporabo v Linux okolju
    // system("/bin/stty raw");


    while (1) {
        c = getc(stdin);
        putc(c, stdout);
    }
}