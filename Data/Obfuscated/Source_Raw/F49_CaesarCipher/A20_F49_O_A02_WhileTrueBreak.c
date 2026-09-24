/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A20_F49_O_A02_WhileTrueBreak.c
 * Implementation Logic: A20_F49_O_A02_WhileTrueBreak
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void J7v(char *qb, int S) {

    char *l = qb;
    int BVS6 = (S % 26 + 26) % 26;
    while(1) {
        if(*l == 0) break;
        if(*l >= 'A' && *l <= 'Z') *l = (*l - 'A' + BVS6) % 26 + 'A';
        else if(*l >= 'a' && *l <= 'z') *l = (*l - 'a' + BVS6) % 26 + 'a';
        l++;
    }
}

int main(int i6, char *LH[]) {
    if (i6 < 3) {
        return 1;
    }
    int S = atoi(LH[2]);
    J7v(LH[1], S);
    printf("%s\n", LH[1]);
    return 0;
}
