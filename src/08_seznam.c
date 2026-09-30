//
// Created by Predavanja on 30. 09. 2026.
//


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_OCEN 10

typedef struct student {
  char *ime;
  int  id;
  int stOcen;           // stevilo vpisanih ocena
  int ocene[MAX_OCEN]; // tabela vpisanih stevil
  struct student *next;
} student;

student * ustvariStudenta(char *ime, int id) {
  student * nov = malloc(sizeof(student));

  nov->ime = malloc(strlen(ime)*sizeof(char)+1);
  strcpy(nov->ime, ime);
  nov->id = id;
  nov->stOcen = 0;
  nov->next = NULL;

  return nov;
}

void dodajOceno(student *s, int ocena) {
  s->ocene[s->stOcen++] = ocena;
}

void izpisiStudenta(student *s) {
  char ocene[50] = "[";
  char *p = ocene +1;
  for (int i=0; i<s->stOcen; i++) {
    sprintf(p, "%d", s->ocene[i]);
    p += (s->ocene[i]==10 ? 2 : 1);
    if (i < s->stOcen-1) {
      *p = ',';
      p++;
    }
  }
  strcat(p,"]");

  printf("ID: %d, Ime: %s, ocene: %s\n", s->id, s->ime, ocene);
}

void izpisiSeznam(student *z) {
  while (z != NULL) {
    izpisiStudenta(z);
    z = z->next;
  }
}

void osvobodiStudenta(student *s) {
  free(s->ime);
  free(s);
}

void pocistiSeznam(student *z) {
  student *t;
  while (z != NULL) {
    t = z->next; // si zapomnimo naslednji element
    osvobodiStudenta(z);
    z = t;
  }
}

// doda studenta na zacetek in vrne kazalec na zacetek seznama
student * dodajZ(student *z, student *nov) {
  nov -> next = z;
  return nov;
}

// doda studenta na konec in vrne kazalec na zacetek seznama
student * dodajK(student *z, student *nov) {
  if (z == NULL)
    return nov;

  student *t = z;
  // s kazalcem t se sprehodim do zadnjega elementa
  while (t->next != NULL)
    t = t->next;

  // ko pridem sem, t kaze na zadnji element
  t -> next = nov;

  return z;
}

// vstavi na pravo mesto (urejeno) in vrne kazalec na zacetek
student * dodajU(student *z, student *nov) {
  // seznam je prazen ali nov element je manjsi od prvega elementa
  if ((z == NULL) || (strcmp(nov->ime, z->ime) < 0)) {
    nov -> next = z;
    return nov;
  }

  student *t = z; // t uporabim za sprehod do pravega mesta
  while (t->next !=NULL && strcmp(t->next->ime, nov->ime)<0)
    t=t->next;

  // t sedaj kaze na zadnji element v seznamu, ki je manjsi od nov
  nov->next = t->next;
  t->next = nov;

  return z;
}

// poisce in vrne studenta z danim imenom
student * isciPoImenu(student *z, char *ime) {
  while (z!=NULL) {
    if (strcmp(z->ime, ime)==0) return z;
    z = z->next;
  }
}

student * brisiPoImenu(student *z, char *ime) {
  if (z == NULL) return z; // v praznem seznamu ne moremo brisati

  // brisemo prvi element
  if (strcmp(z->ime, ime)==0) {
    student *t = z->next;
    osvobodiStudenta(z);
    return t;
  }

  student *t = z;
  while (t -> next != NULL && strcmp(t->next->ime, ime)!=0)
    t = t->next;

  if (t->next != NULL) {
    student *q = t->next;
    t->next = t->next->next;
    osvobodiStudenta(q);
  }
  return z;
}

int main() {
  student *s1 = ustvariStudenta("D", 63000001);dodajOceno(s1, 10);dodajOceno(s1, 9);dodajOceno(s1, 7);
  student *s2 = ustvariStudenta("F", 63000002);dodajOceno(s2, 7);
  student *s3 = ustvariStudenta("A", 63000007);dodajOceno(s3, 6);dodajOceno(s3, 5);
  student *s4 = ustvariStudenta("Z", 63000006);
  student *s5 = ustvariStudenta("R", 63000015);

  student *z = NULL; // prazen seznam
  z = dodajU(z, s1);
  z = dodajU(z, s2);
  z = dodajU(z, s3);
  z = dodajU(z, s4);
  z = dodajU(z, s5);

  // brisanje po imenu
  z = brisiPoImenu(z, "Q");

  izpisiSeznam(z);


  // ISKANJE PO IMENU
  printf("Vpisi ime: ");
  char vr[10];scanf("%s", vr);
  student *s = isciPoImenu(z, vr);
  if (s != NULL)
    izpisiStudenta(s);
  else
    printf("Student ne obstaja\n");y

  pocistiSeznam(z);
}