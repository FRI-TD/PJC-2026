//
// Created by Predavanja on 2. 10. 2026.
//


#include <stdarg.h>
#include <stdio.h>

int max(int count, ...) {
  va_list params;
  va_start(params, count); // inicializacija "tabelce parametrov" params
  int max = va_arg(params, int); // prvi parameter

  for (int i=1; i<count; i++) {
    int m = va_arg(params, int); // naslednji parameter
    if (m > max) max = m;
  }
  va_end(params);
  return max;
}

int main() {
  int m = max(8, 4, 3, 8, 1, 2, 10);
  printf("max=%d\n", m);
}