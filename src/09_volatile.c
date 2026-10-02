//
// Created by Predavanja on 1. 10. 2026.
//


#include <stdio.h>

int main() {
  volatile int i = 4;
  int j = 5;

  int *p;
  p = &j;
  *p = 10;

  p+=2;
  *p=20;

  printf("i=%d, j=%d\n", i, j);
}