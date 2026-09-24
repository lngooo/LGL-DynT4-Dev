/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A13_F28_O_A06_PointerObf.c
 * Implementation Logic: PointerObf derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int SrS2(char *hQ) {
    char *Cg = hQ;
    char *i = hQ;
    while (*i) i++;
    i = i - 1;
    while (Cg < i) {
        if (*Cg - *i != 0) return 0;
        Cg++;
        i--;
    }
    return 1;
}

int main(int EyEk, char *L[]) {
    if (EyEk < 2) return 1;
    char *hQ = L[1];
    int CLK = SrS2(hQ);
    printf("%d\n", CLK);
    return 0;
}