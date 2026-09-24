/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A01_F49_S_IterativeBasic.c
 * Implementation Logic: A01_F49_S_IterativeBasic
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void Vy(char *V, int bix) {

    int J6Ca = 0;
    int yH = (bix % 26 + 26) % 26;
    while (V[J6Ca] != '\0') {
        if (V[J6Ca] >= 'a' && V[J6Ca] <= 'z') V[J6Ca] = (V[J6Ca] - 'a' + yH) % 26 + 'a';
        else if (V[J6Ca] >= 'A' && V[J6Ca] <= 'Z') V[J6Ca] = (V[J6Ca] - 'A' + yH) % 26 + 'A';
        J6Ca++;
    }
}

int main(int dv70, char *z[]) {
    if (dv70 < 3) {
        return 1;
    }
    int bix = atoi(z[2]);
    Vy(z[1], bix);
    printf("%s\n", z[1]);
    return 0;
}
