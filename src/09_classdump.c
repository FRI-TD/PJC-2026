//
// Created by Predavanja on 1. 10. 2026.
//
#pragma pack(1)

#include <stdio.h>

typedef struct classfile {
  char magic[4];
  unsigned short minor;
  unsigned short major;   // 61
  unsigned short cpcount; // 32
} classfile;


unsigned short swap16(unsigned short x) {
  return (x << 8) | (x >> 8);
}

int main() {
  FILE *f = fopen("../viri/Test.class", "r");
  if (f == NULL) {
    printf("Napaka!\n");
    return 1;
  }

  classfile cf;
  fread(&cf, sizeof(classfile), 1, f);
  fclose(f);

  for (int i=0; i<4; i++) printf("%x", cf.magic[i]);
  printf("\n");

  printf("Major version: %d\n", swap16(cf.major));
  printf("Constant pool count: %d\n", swap16(cf.cpcount));
}