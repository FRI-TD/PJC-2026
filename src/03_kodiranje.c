//
// Created by Predavanja on 23. 09. 2026.
//


#include <stdio.h>
#include <string.h>

extern void kodiraj(char besedilo[], int len, char kljuc[]);
extern void odkodiraj(char besedilo[], int len, char kljuc[]);
extern char defaultKljuc[];

int main() {
  char besedilo[20];
  printf("Vpisi besedilo: ");
  scanf("%s", besedilo);

  int d = strlen(besedilo);

  kodiraj(besedilo, d, defaultKljuc);
  printf("Kodirano besedilo: ");
  for (int i=0; i<d; i++)
    printf("%c", besedilo[i]);
  printf("\n");

  odkodiraj(besedilo, d, defaultKljuc);
  printf("Odkodirano besedilo: %s\n", besedilo);
}