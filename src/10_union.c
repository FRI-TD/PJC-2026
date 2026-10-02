//
// Created by Predavanja on 2. 10. 2026.
//


#include <stdio.h>



union stevilo {
  int i;
  float f;
};

union mint {
  int i;
  struct {
    unsigned char b4;
    unsigned char b3;
    unsigned char b2;
    unsigned char b1;
  } bytes;
};

int main() {
  union stevilo s;
  s.i = 0x40400000; // mantisa 5, eksponent=128, v=1.mantisa * 2^(eksponent-127) = 1.5*2=3
  printf("%.2f\n", s.f);

  union mint mi;
  mi.i = 0xcafebabe;
  printf("%x\n", mi.bytes.b1);
}