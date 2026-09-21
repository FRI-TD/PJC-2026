//
// Created by Predavanja on 21. 09. 2026.
//

#include <stdio.h>
#include <stdlib.h>

// racunalo 5 7 : 5 + 7 = 12
int main(int argc, char *args[]) {
  if (argc != 3) {
    printf("Uporaba: racunalo x y\n");
    return 1;
  }

  int x = atoi (args[1]);
  int y = atoi (args[2]);
  printf("%d + %d = %d \n", x, y, x+y);

  return 0;
}