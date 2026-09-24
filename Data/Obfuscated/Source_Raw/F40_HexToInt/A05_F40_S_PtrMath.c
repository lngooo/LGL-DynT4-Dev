/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A05_F40_S_PtrMath.c
 * Implementation Logic: Calculates power of 16 based on pointer distance from end.
 * Input Format: <hex_string>
 */
#include <stdio.h>
#include <string.h>

int o5(const char* DCiK) {
    int zRuA = (int)strlen(DCiK);
    int mD = 0;
    int h = 1;
    for (int dP0 = zRuA - 1; dP0 >= 0; dP0--) {
        int W = (DCiK[dP0] | 32);
        W = (W >= 'a') ? (W - 'a' + 10) : (W - '0');
        mD += W * h;
        h *= 16;
    }
    return mD;
}

int main(int j0C, char* b[]) {
    if (j0C < 2) return 0;
    printf("%d", o5(b[1]));
    return 0;
}