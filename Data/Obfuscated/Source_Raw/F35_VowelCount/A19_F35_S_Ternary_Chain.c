/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A19_F35_S_Ternary_Chain.c
 * Logic: Use a chain of ternary operators to determine increment.
 */
#include <stdio.h>
#include <stdlib.h>

int aK(const char* EfnR) {
    int fM9h = 0;
    for (; *EfnR; EfnR++) {
        char zd = *EfnR;
        fM9h += (zd=='a'?1:(zd=='e'?1:(zd=='i'?1:(zd=='o'?1:(zd=='u'?1:
                 (zd=='A'?1:(zd=='E'?1:(zd=='I'?1:(zd=='O'?1:(zd=='U'?1:0))))))))));
    }
    return fM9h;
}

int main(int Uj, char* n[]) {
    if (Uj < 2) { printf("0\n"); return 0; }
    printf("%d\n", aK(n[1]));
    return 0;
}