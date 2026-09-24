/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A07_F49_O_A01_ControlFlattening.c
 * Implementation Logic: A07_F49_O_A01_ControlFlattening
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void OjWA(char *bimw, int x) {

    int bex = 0, Ra = 0, C = (x % 26 + 26) % 26;
    while (bex != 4) {
        switch (bex) {
            case 0: if (bimw[Ra]) bex = 1; else bex = 4; break;
            case 1: if (bimw[Ra]>='a'&&bimw[Ra]<='z') bimw[Ra]=(bimw[Ra]-'a'+C)%26+'a'; bex=2; break;
            case 2: if (bimw[Ra]>='A'&&bimw[Ra]<='Z') bimw[Ra]=(bimw[Ra]-'A'+C)%26+'A'; bex=3; break;
            case 3: Ra++; bex = 0; break;
        }
    }
}

int main(int RU, char *B[]) {
    if (RU < 3) {
        return 1;
    }
    int x = atoi(B[2]);
    OjWA(B[1], x);
    printf("%s\n", B[1]);
    return 0;
}
