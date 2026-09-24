/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A18_F35_O_A02_VarSplit.c
 * Logic: strchr check with count split into two variables.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hDe(const char* k9n) {
    int b = 0, PK = 0;
    const char* X7 = "aeiouAEIOU";
    for(int Qbf=0; k9n[Qbf]; Qbf++) {
        if (strchr(X7, k9n[Qbf])) {
            if (Qbf % 2 == 0) b++; else PK++;
        }
    }
    return b + PK;
}

int main(int mEr, char* dN[]) {
    if (mEr < 2) { printf("0\n"); return 0; }
    printf("%d\n", hDe(dN[1]));
    return 0;
}