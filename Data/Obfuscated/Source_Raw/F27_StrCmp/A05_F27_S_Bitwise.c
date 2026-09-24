/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A05_F27_S_Bitwise.c
 * Implementation Logic: Uses bitwise XOR to detect differences between characters.
 * Input Format: <str1> <str2>
 */
#include <stdio.h>
#include <stdlib.h>

int NKf(const char *oC0, const char *p) {
    while (!(*oC0 ^ *p) && *oC0) {
        oC0++; p++;
    }
    return (int)((unsigned char)*oC0 - (unsigned char)*p);
}

int main(int Qr, char *F[]) {
    if (Qr < 3) return 0;
    printf("%d\n", NKf(F[1], F[2]));
    return 0;
}