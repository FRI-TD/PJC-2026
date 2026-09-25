//
// Created by Predavanja on 25. 09. 2026.
//


#include <stdio.h>

typedef struct {
    double re;
    double im;
} cplx;

cplx vsota(cplx w1, cplx w2) {
    cplx r = {w1.re+w2.re, w1.im+w2.im};
    return r;
}

int main() {
    cplx w = {1,4};
    cplx z = {5,-1};

    cplx v = vsota(w,z);
    printf("%.2f + %.2f*i\n", v.re, v.im);

    {
        int x;
    }
    printf("%d",x);
}