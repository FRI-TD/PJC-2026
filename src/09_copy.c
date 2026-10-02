//
// Created by Predavanja on 1. 10. 2026.
//


#include <stdio.h>

#define MAX 4096

// prepisemo datoteko iz vhod v izhod
int main() {
  char *vhod = "../viri/volk8.bmp";
  char *izhod = "../viri/volkC.bmp";

  FILE *fin  = fopen(vhod, "rb");
  FILE *fout = fopen(izhod, "wb");

  if (fin == NULL || fout == NULL) {
    printf("Napaka!\n");
    return 0;
  }

  //while (!feof(fin)) {
  //  int z = fgetc(fin);
  //  fputc(z, fout);
  //}

  // branje in pisanje po blokih:
  char blok[MAX];
  while (!feof(fin)) {
    int r = fread(blok, sizeof(char), MAX, fin);
    if (r!=0)
      fwrite(blok, sizeof(char), r, fout);
  };

  fclose(fin);
  fclose(fout);

  printf("OK ...\n");
}