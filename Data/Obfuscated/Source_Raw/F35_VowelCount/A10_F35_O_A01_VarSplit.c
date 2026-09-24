/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A10_F35_O_A01_VarSplit.c
 * Logic: Counter split into 'vowels_found' and 'others_ignored'.
 */
#include <stdio.h>
#include <stdlib.h>

int Mj(const char* O) {
    int Nfd = 0;
    int Va4f = 0;
    for (int Aq = 0; O[Aq]; Aq++) {
        char knTJ = O[Aq];
        if (knTJ == 'a' || knTJ == 'e' || knTJ == 'i' || knTJ == 'o' || knTJ == 'u' ||
            knTJ == 'A' || knTJ == 'E' || knTJ == 'I' || knTJ == 'O' || knTJ == 'U') {
            Nfd++;
        } else {
            Va4f++;
        }
    }
    return Nfd + (Va4f * 0);
}

int main(int wbIk, char* zHTf[]) {
    if (wbIk < 2) { printf("0\n"); return 0; }
    printf("%d\n", Mj(zHTf[1]));
    return 0;
}