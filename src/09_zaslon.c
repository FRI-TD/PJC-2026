//
// Created by Predavanja on 1. 10. 2026.
//


#include <stdio.h>
#include <stdlib.h>

#define W 79
#define H 24

char znaki[] = {'#', '$', '+', '-'};

int main() {

  //char **zaslon = malloc(H*sizeof(char*));
  //for (int i=0; i<H; i++)
  //  *(zaslon + i) = malloc(W*sizeof(char)); //isto kot zaslon[i] = ...

  char *blok    = malloc(W*H*sizeof(char));
  char **zaslon = malloc(H*sizeof(char*));
  for (int i=0; i<H; i++)
    zaslon[i] = blok + W * i * sizeof(char);


  for (int i=0; i<H; i++)
    for (int j=0; j<W; j++)
      zaslon[i][j] = znaki[rand() % 4];

  for (int i=0; i<H; i++) {
    for (int j=0; j<W; j++)
      printf("%c", zaslon[i][j]);
    printf("\n");
  }

  free(blok);
  free(zaslon);
}