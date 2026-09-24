/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A16_F40_O_A01_ArithIdentity.c
 * Implementation Logic: Replace multiplication with (x << 4).
 */
#include <stdio.h>

int x(const char* B) {
    int eeK = 0;
    while(*B) {
        int vBr = (*B <= '9') ? (*B - '0') : ((*B|32) - 'a' + 10);
        eeK = (eeK << 4);
        eeK = eeK + vBr;
        B++;
    }
    return eeK;
}

int main(int K, char* LnLu[]) {
    if (K < 2) return 0;
    printf("%d", x(LnLu[1]));
    return 0;
}