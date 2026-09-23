//
// FUnkciji za kodiranje in dekodiranje z XOR metodo
//

#include <string.h>

// privzeti kljuc
char defaultKljuc[] = "TEST";

void kodiraj(char besedilo[], int len, char kljuc[]) {
  for (int i=0; i<len; i++)
    besedilo[i] = besedilo[i] ^ kljuc[i % strlen(kljuc)];
}

void odkodiraj(char besedilo[], int len, char kljuc[]) {
    kodiraj(besedilo, len, kljuc);
}