//
// Created by Predavanja on 23. 09. 2026.
//


#include <math.h>
#include <stdio.h>

#define W 78
#define H 24

char zaslon[H][W];

// sprazni zaslon
void clear() {
    for (int i=0; i<H; i++)
        for (int j=0; j<W; j++) {
            zaslon[i][j] = ' ';
        }
}

void izpisi() {
    for (int i=0; i<H; i++) {
        for (int j=0; j<W; j++)
            printf("%c", zaslon[i][j]);
        printf("\n");
    }
}

void koordinatniSistem() {
    for (int i=0; i<W; i++)
        zaslon[H/2][i] = '-';
    for (int i=0; i<H; i++)
        zaslon[i][W/2] = '|';
    zaslon[H/2][W/2] = '+';
}

void graf() {
    double x1=-M_PI;
    double x2=M_PI;
    double y1=-1;
    double y2=1;

    for (int i=0; i<W; i++) {
        double x=i*(x2-x1)/W+x1;
        double y=sin(x);
        int    j=H*(y-y1)/(y2-y1);
        if (j>=0 && j<H)
            zaslon[H-j][i] = '*';
    }
}

int main() {
  clear();
  koordinatniSistem();
  graf();
  izpisi();
}