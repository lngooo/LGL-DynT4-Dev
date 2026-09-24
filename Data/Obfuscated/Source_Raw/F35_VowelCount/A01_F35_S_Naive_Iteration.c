/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A01_F35_S_Naive_Iteration.c
 * Logic: Simple iteration with if-logical OR conditions.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int go3(const char* J) {
    int xxb8 = 0;
    for (int Hq9y = 0; J[Hq9y] != '\0'; Hq9y++) {
        char bNu = J[Hq9y];
        if (bNu == 'a' || bNu == 'e' || bNu == 'i' || bNu == 'o' || bNu == 'u' ||
            bNu == 'A' || bNu == 'E' || bNu == 'I' || bNu == 'O' || bNu == 'U') {
            xxb8++;
        }
    }
    return xxb8;
}

int main(int XRs0, char* oam[]) {
    if (XRs0 < 2) { printf("0\n"); return 0; }
    printf("%d\n", go3(oam[1]));
    return 0;
}