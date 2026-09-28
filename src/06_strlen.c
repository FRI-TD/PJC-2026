//
// Created by Predavanja on 28. 09. 2026.
//


#include <stdio.h>

int strlenP(char *s) {
  int i=0;
  while (s[i] != '\0') i++;
  return i;
}

int strlen(char s[]) {
  int i=0;
  while (*s != '\0') {
    s++; i++;
  }
  return i;
}

int main() {
  char niz[] = "Kazalci so zanimivi!";
  printf("Dolzina: %d\n", strlen(niz));
  printf("Dolzina: %d\n", strlenP(niz));

}