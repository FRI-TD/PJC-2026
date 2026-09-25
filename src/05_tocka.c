//
// Created by Predavanja on 25. 09. 2026.
//


#include <stdio.h>

struct tocka {
    int x;
    int y;
};

void izpisi(struct tocka t) {
    printf("T(%d,%d)\n", t.x, t.y);
}

// zamenja vrednosti x in y med seboj
void zamenjaj(struct tocka t) {
    int tmp = t.x;
    t.x     = t.y;
    t.y     = tmp;
}

int main() {
    struct tocka t1;
    t1.x = 5;
    t1.y = 10;
    izpisi(t1);

    struct tocka t2 = {3, -2};
    izpisi(t2);

    struct tocka t3 = {.y=7};
    izpisi(t3);

    struct tocka t4;
    izpisi(t4);

    struct tocka t5 = {10, 20};
    izpisi(t5);
    zamenjaj(t5);
    izpisi(t5);
}