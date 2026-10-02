//
// Created by Predavanja on 2. 10. 2026.
//


#include <stdio.h>

#define N 10
#define forever for(;;)

#define min(x,y) (x) < (y) ? (x) : (y)

#define dprint(expr) printf(#expr "= %d\n", expr)

int main() {
  printf("%d\n", N);

  int a = 5, b=10;

#ifdef debug
  printf("min(%d, %d)=%d\n", a, b, min(a++,b));
#endif

  dprint(a + b);
}