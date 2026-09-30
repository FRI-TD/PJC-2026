//
// Created by Predavanja on 30. 09. 2026.
//


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct oseba {
    char *ime;
    char *priimek;
    char *telefon;
} oseba;

int main() {


  char vr[100];
  oseba o;

  for (int i=0; i<3; i++) {
      scanf("%s", vr);

      char **p = NULL;
      switch (i) {
          case 0:
            p = &o.ime;
            break;
          case 1:
            p = &o.priimek;
            break;
          case 2:
            p = &o.telefon;
            break;
      }
      if (p!=NULL) {
          *p = malloc(strlen(vr)+1);
          strcpy(*p, vr);
      }

  }
  printf("%s, %s, %s\n", o.ime, o.priimek, o.telefon);

}