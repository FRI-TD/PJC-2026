#include <stdio.h>
#include "moj.h"

// N-krat izpis niza
void izpisi(char *niz) {
  for (int i=0; i<N; i++) {
    printf("%d. %s\n", i, niz);
  }
}