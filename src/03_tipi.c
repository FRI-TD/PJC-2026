//
// Created by Predavanja on 23. 09. 2026.
//


#include <stdio.h>
#include <limits.h>

int main() {
     char format[]  = "%20s %10d         %20d ... %20d\n";
     char formatL[] = "%20s %10d         %20lld ... %20lld\n";

     printf("Tip                          Velikost (bajtih)       Obseg\n");
     printf(format, "short int", sizeof(short int), SHRT_MIN, SHRT_MAX);
     printf(format, "unsigned short int", sizeof(unsigned short int), 0, USHRT_MAX);
     printf(format, "int",       sizeof(int), INT_MIN, INT_MAX);
     printf(format, "long",       sizeof(long), LONG_MIN, LONG_MAX);
     printf(formatL, "long long",  sizeof(long long), LLONG_MIN, LLONG_MAX);
}