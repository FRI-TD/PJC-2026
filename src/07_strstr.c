//
// Created by Predavanja on 29. 09. 2026.
//


#include <stdio.h>
#include <string.h>

int main() {
    char *niz = "Danes je lep dan z veliko prometa na cesti.";


    char * nasel = niz;
    do {
        nasel = strstr(nasel, " ");
        if (nasel != NULL) {
            nasel++;
            printf("%s \n", nasel);
        } else
            printf("Nisem nasel");
    } while (nasel != NULL);
}
