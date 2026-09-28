//
// Created by Predavanja on 28. 09. 2026.
//


#include <stdio.h>
#include <stdlib.h>

typedef struct kompleksno {
    double re;
    double im;
} cplx;

int main() {
  cplx w;
  w.re = 5;
  w.im = 1;

  cplx *z; // kazalec na kompleksno stevilo
  z = malloc(sizeof(cplx));
  (*z).re = 5;
  z->im = 1;
  printf("%.2f + %.2fi\n", z->re, z->im);
  free(z);
  printf("%.2f + %.2fi\n", z->re, z->im);
}