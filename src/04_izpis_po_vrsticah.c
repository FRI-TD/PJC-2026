//
// Created by Predavanja on 24. 09. 2026.
//


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define N 5

int main() {
     // char imeDatoteke[] = "D:\\Users\\tomaz\\Dropbox\\FRI\\pedagosko\\PJC\\PJC_2026\\code\\viri\\besedilo.txt";
     char imeDatoteke[] = "../viri/besedilo.txt";

     // system("ps pwd");

     FILE *datoteka;
     datoteka = fopen(imeDatoteke, "r");
     if (datoteka == NULL) {
          printf("Datoteke '%s' ne morem odpreti\n", imeDatoteke);
          return 1;
     }

     char buffer[N];
     int i=1; bool izpisStevilke=true;
     while (!feof(datoteka)) {
          fgets(buffer, N, datoteka);
          if (izpisStevilke)
            printf("%d. %s", i++, buffer);
          else
            printf("%s",buffer);

         izpisStevilke = buffer[strlen(buffer)-1] == '\n';
     }

     fclose(datoteka);
}