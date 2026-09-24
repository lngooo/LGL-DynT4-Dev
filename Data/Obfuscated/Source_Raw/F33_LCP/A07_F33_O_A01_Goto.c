/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A07_F33_O_A01_Goto.c
 * Implementation Logic: Goto
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void kWV(char **f, int E8, char *C) {
    int dYO = 0;
    if (E8 <= 0) goto U;
wu:
    if (!f[0][dYO]) goto U;
    int RhY6 = 1;
Wsq:
    if (RhY6 >= E8) goto fI;
    if (f[RhY6][dYO] != f[0][dYO]) goto U;
    RhY6++; goto Wsq;
fI:
    C[dYO] = f[0][dYO]; dYO++; goto wu;
U:
    C[dYO] = '\0';
}

int main(int MQ, char *sFH6[]) {
    if (MQ < 2) return 0;
    int Ws = MQ - 1;
    char **f = &sFH6[1];
    char u[128] = {0};
    kWV(f, Ws, u);
    printf("%s\n", u);
    return 0;
}