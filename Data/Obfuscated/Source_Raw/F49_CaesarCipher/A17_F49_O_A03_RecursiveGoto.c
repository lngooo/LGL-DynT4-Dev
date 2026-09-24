/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A17_F49_O_A03_RecursiveGoto.c
 * Implementation Logic: A17_F49_O_A03_RecursiveGoto
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void rbRP(char *EYWx, int BD) {

    int ixK7 = (BD % 26 + 26) % 26;
    int B = 0;
    a1: if (EYWx[B] == 0) goto p;
    if (EYWx[B] >= 'a' && EYWx[B] <= 'z') EYWx[B] = (EYWx[B]-'a'+ixK7)%26+'a';
    else if (EYWx[B] >= 'A' && EYWx[B] <= 'Z') EYWx[B] = (EYWx[B]-'A'+ixK7)%26+'A';
    B++; goto a1;
    p:;
}

int main(int mZGQ, char *O2Y[]) {
    if (mZGQ < 3) {
        return 1;
    }
    int BD = atoi(O2Y[2]);
    rbRP(O2Y[1], BD);
    printf("%s\n", O2Y[1]);
    return 0;
}
