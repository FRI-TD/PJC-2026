//
// Created by Predavanja on 22. 09. 2026.
//

#include <stdio.h>

int main() {
  float x[50];

  printf("%d\n", sizeof(x));
  printf("Stevilo elementov: %d\n", sizeof(x) / sizeof(float));

  int t1[]  = {1,2,3};
  int t2[5] = {1,2};
  // int t3[3] = {1,2,3,4};
  int t3[] = {0};
  int t4[10] = {0};
  int t5[10] = {1};
}