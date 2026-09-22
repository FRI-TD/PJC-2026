//
// Created by Predavanja on 22. 09. 2026.
//

#include <stdio.h>

// Program bere stevila, dokler uporabnik ne vpise 0. Na koncu program
// izpise najvecje in najmanjse prebrano stevilo
int main() {
    int t; // trenutno prebrano stevilo
    int min = 0, max = 0; // najvecje in najmanjše prebrano število

    int prvo = 1; // gre za prvo branje?
    do {
        printf("Vpisi stevilo: ");
        scanf("%d", &t);

        if (t!=0) {
          if (prvo || t < min) min = t;
          if (prvo || t > max) max = t;
          prvo = 0;
        }
    } while (t != 0);

    if (prvo)
        printf("Ni bilo vpisov!\n");
    else {
        printf("Najvecje : %d\n", max);
        printf("Najmanjse: %d\n", min);
    }
}