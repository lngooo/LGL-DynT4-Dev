/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A02_F40_S_Bitshift.c
 * Implementation Logic: Uses bitwise left shift (<< 4) instead of multiplication by 16.
 * Input Format: <hex_string>
 */
#include <stdio.h>

int PIL(const char* pY) {
    int A0 = 0;
    for (int t = 0; pY[t] != '\0'; t++) {
        int tnT = 0;
        char C = pY[t];
        if (C <= 57) tnT = C - 48;
        else tnT = (C | 32) - 87;
        A0 = (A0 << 4) | tnT;
    }
    return A0;
}

int main(int oQXD, char* g9[]) {
    if (oQXD < 2) return 0;
    printf("%d", PIL(g9[1]));
    return 0;
}