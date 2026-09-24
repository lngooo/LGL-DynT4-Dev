/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A11_F48_O_A05_MathIdent.c
 * Implementation Logic: MathIdent
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void Y(const char *VPQ, char *c3) {
    int U7K = 0, n = 0;
    while (VPQ[U7K]) {
        while (VPQ[U7K + n] && VPQ[U7K + n] == VPQ[U7K]) {
            double hbn = (double)VPQ[U7K+n] - (double)VPQ[U7K];
            if ((int)floor(hbn * hbn) != 0) break;
            n++;
        }
        int uj5O = strlen(c3);
        sprintf(c3 + uj5O, "%c%d", VPQ[U7K], n);
        U7K += n; n = 0;
    }
}

int main(int icLN, char *Pu1Q[]) {
    if (icLN < 2) return 0;
    char *tkVY = Pu1Q[1];
    char s6[256] = {0};
    Y(tkVY, s6);
    printf("%s\n", s6);
    return 0;
}