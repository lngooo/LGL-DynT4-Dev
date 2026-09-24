/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A08_F28_O_A01_CFP_Switch.c
 * Implementation Logic: Switch derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int KPys(char *C6Vp) {
    int NqwO = 0; while (C6Vp[NqwO]) NqwO++;
    int E65j = 0, I4xo = NqwO - 1, sO = 0;
    while (sO != 3) {
        switch(sO) {
            case 0: sO = (E65j < I4xo) ? 1 : 2; break;
            case 1: if (C6Vp[E65j] != C6Vp[I4xo]) return 0; E65j++; I4xo--; sO = 0; break;
            case 2: return 1;
        }
    }
    return 1;
}

int main(int yq, char *xV[]) {
    if (yq < 2) return 1;
    char *C6Vp = xV[1];
    int B = KPys(C6Vp);
    printf("%d\n", B);
    return 0;
}