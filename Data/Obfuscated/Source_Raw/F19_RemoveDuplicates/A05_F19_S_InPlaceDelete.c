/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A05_F19_S_InPlaceDelete.c
 * Implementation Logic: InPlaceDelete
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int d(int u8[], int lwZV) {
    int ELiq = lwZV;
    for (int R = 0; R < ELiq; R++) {
        for (int Qi = R + 1; Qi < ELiq; Qi++) {
            if (u8[R] == u8[Qi]) {
                for (int yK = Qi; yK < ELiq - 1; yK++) u8[yK] = u8[yK + 1];
                ELiq--; Qi--;
            }
        }
    }
    return ELiq;
}

int main(int d6U, char *TXp[]) {
    if (d6U < 2) return 0;
    int TDlC = d6U - 1;
    int u8[128];
    for (int R = 0; R < TDlC; R++) {
        u8[R] = atoi(TXp[R + 1]);
    }
    int ZDG = d(u8, TDlC);
    for (int R = 0; R < ZDG; R++) {
        printf("%d%s", u8[R], (R == ZDG - 1 ? "" : " "));
    }
    printf("\n");
    return 0;
}