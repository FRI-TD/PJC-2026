//
// Created by Predavanja on 25. 09. 2026.
//


#include <stdio.h>
#include <unistd.h>

int main() {
    int i;
    int a[10];
    for(i=0; i<=10; i++) {
        printf("%d\n", i);
        sleep(1);
        a[i]=0;
    }
}
