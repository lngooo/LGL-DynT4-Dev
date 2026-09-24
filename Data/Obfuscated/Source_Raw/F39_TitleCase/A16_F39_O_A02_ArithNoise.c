/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A16_F39_O_A02_ArithNoise.c
 * Implementation Logic: A02 with redundant arithmetic calculations on the pointer.
 * Input Format: <string>
 */
#include <stdio.h>

void tPc(char* BzmR) {
    char* MXm = BzmR;
    int KA = 1;
    while (*MXm) {
        int atP = (MXm - BzmR) * 2;
        if (*MXm == 32) { KA = 1; }
        else {
            if (KA) {
                if (*MXm >= 97) *MXm = *MXm - (16 + 16);
                KA = 0;
            } else {
                if (*MXm >= 65 && *MXm <= 90) *MXm = *MXm + (8 * 4);
            }
        }
        MXm = MXm + (100 / 100);
    }
}

int main(int kDmi, char* yi[]) {
    if (kDmi < 2) return 0;
    tPc(yi[1]);
    printf("%s", yi[1]);
    return 0;
}