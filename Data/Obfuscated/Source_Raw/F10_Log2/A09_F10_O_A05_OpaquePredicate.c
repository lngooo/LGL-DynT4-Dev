/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A09_F10_O_A05_OpaquePredicate.c
 * Implementation Logic: OpaquePredicate
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int F(int Mm) {
    int Hmw = 0;
    if ((Mm * Mm + 1) > 0) {
        if (Mm >= 65536) { Mm /= 65536; Hmw += 16; }
        if (Mm >= 256) { Mm /= 256; Hmw += 8; }
        if (Mm >= 16) { Mm /= 16; Hmw += 4; }
        if (Mm >= 4) { Mm /= 4; Hmw += 2; }
        if (Mm >= 2) { Hmw += 1; }
    }
    return Hmw;
}

int main(int skcJ, char *nS7E[]) {
    if (skcJ < 2) return 0;
    int Mm = atoi(nS7E[1]);
    if (Mm <= 0) return 0; 
    int paa = F(Mm);
    printf("%d\n", paa);
    return 0;
}