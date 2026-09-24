/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A12_F50_O_A11_JunkCode.c
 * Implementation Logic: Injected junk math into A11 to alter Token sequence.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Gq(int AnHb, char* bR) {
    char* zfjp[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int Rglh[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    bR[0] = '\0';
    int O = 0, VfJ = 42;
    while(AnHb > 0) {
        VfJ = (VfJ * 3) / 2;
        if (AnHb >= Rglh[O]) {
            strcat(bR, zfjp[O]);
            AnHb -= Rglh[O];
        } else {
            O++;
        }
    }
}

int main(int j, char* PYWg[]) {
    if (j < 2) return 0;
    char Zb[100];
    Gq(atoi(PYWg[1]), Zb);
    printf("%s\n", Zb);
    return 0;
}