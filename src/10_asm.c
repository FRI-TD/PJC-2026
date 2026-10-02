//
// Created by Predavanja on 2. 10. 2026.
//


#include <stdio.h>

int odgovor() {
  asm(".intel_syntax noprefix \n"
      "mov eax, 42  \n"
  );
}

int zmnozi(int x, int y) {
  // rezultat bo v eax: y-krat bomo pristeli x
  asm(".intel_syntax noprefix \n"
      "      xor  eax, eax    \n"
      "LOOP: add eax, ebx     \n"
      "      sub ecx, 1       \n"
      "      cmp ecx, 0       \n"
      "      jg  LOOP         \n"
   :
   : "b" (x), "c" (y)
   :
  );
}

int zastavice() {
  asm(".intel_syntax noprefix \n"
      "pushf        \n"
      "pop eax  \n"
  );
}

void swap(int *x, int *y) {
  asm(".intel_syntax noprefix \n"
      "push [eax] \n"
      "push [ebx] \n"
      "pop  [eax] \n"
      "pop  [ebx] \n"
    :
    : "a" (x), "b" (y)
    :
  );
}

int main() {
  printf("Odgovor: %d\n", odgovor());

  int a=5, b=7;
  printf("%d*%d = %d\n", a, b, zmnozi(a,b));

  printf("Zastavice: %d\n", zastavice());

  a = a-b;
  printf("Zastavice: %d\n", zastavice());

  printf("a=%d, b=%d\n", a, b);
  swap(&a,&b);
  printf("a=%d, b=%d\n",a, b);

}