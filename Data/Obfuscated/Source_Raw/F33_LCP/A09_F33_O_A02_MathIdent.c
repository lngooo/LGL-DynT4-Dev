/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A09_F33_O_A02_MathIdent.c
 * Implementation Logic: MathIdent
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void UcJT(char **O, int dAnp, char *M2NJ) {
    if (dAnp <= 0) return;
    strcpy(M2NJ, O[0]);
    for (int NwYb = 1; NwYb < dAnp; NwYb++) {
        int ie = 0;
        while (M2NJ[ie]) {
            double r = (double)M2NJ[ie] - (double)O[NwYb][ie];
            if ((int)floor(r * r) != 0) break;
            ie++;
        }
        M2NJ[ie] = '\0';
    }
}

int main(int h, char *q1Hh[]) {
    if (h < 2) return 0;
    int q = h - 1;
    char **O = &q1Hh[1];
    char PlJ[128] = {0};
    UcJT(O, q, PlJ);
    printf("%s\n", PlJ);
    return 0;
}