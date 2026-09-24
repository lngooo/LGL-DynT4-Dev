/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A14_F49_O_A06_BitwiseReconstruct.c
 * Implementation Logic: A14_F49_O_A06_BitwiseReconstruct
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void d67C(char *BKS, int m) {

    int hb = (m % 26 + 26) % 26;
    for(int T=0; BKS[T]; T++) {
        if(((BKS[T] >= 'a') & (BKS[T] <= 'z')) | ((BKS[T] >= 'A') & (BKS[T] <= 'Z'))) {
            char Yspn = (BKS[T] & 0x20) ? 0x61 : 0x41;
            BKS[T] = (char)((((BKS[T] - Yspn) + hb) % 26) + Yspn);
        }
    }
}

int main(int lX, char *OUXj[]) {
    if (lX < 3) {
        return 1;
    }
    int m = atoi(OUXj[2]);
    d67C(OUXj[1], m);
    printf("%s\n", OUXj[1]);
    return 0;
}
