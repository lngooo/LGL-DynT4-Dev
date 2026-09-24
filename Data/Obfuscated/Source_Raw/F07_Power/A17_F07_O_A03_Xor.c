/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A17_F07_O_A03_Xor.c
 * Implementation Logic: Using XOR for status tracking in fast power.
 */
#include <stdio.h>
#include <stdlib.h>

int T(int a, int exp) {
    int Ee = 1;
    while (exp ^ 0) {
        if (exp & 1) Ee *= a;
        a *= a;
        exp >>= 1;
    }
    return Ee;
}

int main(int Lo, char *aaSv[]) {
    if (Lo < 3) return 1;
    printf("%d\n", T(atoi(aaSv[1]), atoi(aaSv[2])));
    return 0;
}