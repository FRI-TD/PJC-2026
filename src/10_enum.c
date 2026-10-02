//
// Created by Predavanja on 2. 10. 2026.
//


#include <stdio.h>

typedef enum BARVE {rdeca=1, zelena=2, modra=4, rumena=8, rjava=16} barva;

typedef enum NACIN {PO_ABECEDI, PO_VELIKOSTI};

void izpisiBarvo(barva b) {
  printf("barva: %d\n", b);
}

int main() {
  izpisiBarvo(modra | rumena);
  izpisiBarvo(42);
}