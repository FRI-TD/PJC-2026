//
// Created by Predavanja on 29. 09. 2026.
//


#include <stdio.h>

typedef int operacija(int, int);

typedef struct {
    int x;
    int y;
    char ime[5];
    operacija *op;
} objekt;

int add(int a, int b) {
    return a+b;
}

int mul(int a, int b) {
    return a*b;
}

int div(int a, int b) {
    return a/b;
}

void izpisiObjekt(objekt o) {
    printf("%s(%d,%d)=%d\n", o.ime, o.x, o.y, o.op(o.x, o.y));
}

int main() {
    objekt o1;
    o1 = (objekt) {5, 4,"plus", add};

    objekt o2 = {1,-1, "krat", mul};

    int *t;
    t = (int[]){1,2,3};
    printf("%d", t[1]);

    izpisiObjekt(o1);
    izpisiObjekt(o2);
    izpisiObjekt((objekt){12,3,"div", div});
}