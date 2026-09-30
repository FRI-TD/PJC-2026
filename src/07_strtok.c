//
// Created by Predavanja on 29. 09. 2026.
//


#include <stdio.h>
#include <string.h>

int main() {       //0  1 2  3 4
    char niz[]    = "abc:def:ghi";
    char delims[] = ":";

    char *result;
    result = strtok(niz, delims);
    int i=0;
    while (result != NULL) {
        char *back = result;
        int cnt = 0; // koliko locil je preskocil
        do {
            back--;
            if (back < niz) break;
            cnt++;
        } while (*back == delims[0]);

        i = i + cnt;
        printf("%d. %s\n", i, result);
        result = strtok(NULL, delims);
    }
}
