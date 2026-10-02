//
// Created by Predavanja on 1. 10. 2026.
//


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **args, char **env) {
  char *znaki = args[0];
  printf("Prvih 200 0znakov: \n");
  for (int i=0; i<200; i++) {
      printf("%c", *(znaki+i));
  }

  printf("Okoljske spremenljivke:\n");
  //while (*env != NULL) {
  //  printf("%s\n", *env++);
  //}
  for (int i=0;env[i]!=NULL; i++)
    printf("%s \n", env[i]);


  printf("PATH = %s\n", getenv("PATH"));
}
