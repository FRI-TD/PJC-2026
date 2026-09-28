//
// Created by Predavanja on 28. 09. 2026.
//


#include <stdio.h>

int main() {
  int t[][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      printf("%d ", t[i][j]);
    }
    printf("\n");
  }

  int *p = (int *) t;
  p[0] = -4;
  p[5] = -5;

  int i=2;int j=1;
  // t[i][j] = -7;
  p[i*3+j] = -7;

  printf("--------------------------------\n");
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      printf("%d ", t[i][j]);
    }
    printf("\n");
  }

}