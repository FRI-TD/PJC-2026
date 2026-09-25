//
// Created by Predavanja on 25. 09. 2026.
//


#include <stdio.h>
#include <string.h>

struct oseba {
    char ime[10];
    char priimek[20];
    int starost;
};

void izpisi(struct oseba o) {
    printf("%s", o.ime);
}

#define N 3

int main() {
    struct oseba o[N];

    strcat(o[0].ime, "lojze");
    izpisi(o[0]);

    for (int i=0; i<N; i++) {
        printf("Vpisi ime: ");
        scanf("%s", o[i].ime);

        printf("Vpisi priimek: ");
        scanf("%s", o[i].priimek);

        printf("Vpisi starost: ");
        scanf("%d", &o[i].starost);
    }

    for (int i=0; i<N; i++)
      printf("[ime: %s, priimek: %s, starost: %d]\n", o[i].ime, o[i].priimek, o[i].starost);
}