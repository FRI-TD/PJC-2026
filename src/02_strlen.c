//
// Created by Predavanja on 22. 09. 2026.
//

#include <stdio.h>
#include <string.h>

int main() {
  char ime[20];

  printf("Vpisi ime:");
  scanf("%s", ime);

  int dolzina=0;
  while (ime[dolzina] != '\0')
    dolzina++;
  printf("Dolzina niza '%s' je %d\n", ime, dolzina);
  printf("Velikost spremenjlivke ime: %d\n", sizeof(ime));
  printf("Dolzina niza '%s' je %d\n", ime, strlen(ime));

  // obracanje niza: v ime shrani "obrnjeno" ime (Tomaz -> zamoT)
  int i=0, j=strlen(ime)- 1;
  while (i<j) {
    char c = ime[i];
    ime[i] = ime[j];
    ime[j] = c;
    i++; j--;
  }
  printf("Obratno ime: %s\n", ime);
}
