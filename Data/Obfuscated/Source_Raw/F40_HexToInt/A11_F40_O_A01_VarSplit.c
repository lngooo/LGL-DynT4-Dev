/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A11_F40_O_A01_VarSplit.c
 * Implementation Logic: Splitting 'res' into res_low and res_high.
 */
#include <stdio.h>

int gwP2(const char* JR) {
    int Tf = 0, QY1O = 0;
    while (*JR) {
        int TWqI = (*JR <= '9') ? (*JR - '0') : ((*JR|32) - 'a' + 10);
        Tf = (Tf * 16) + ((QY1O * 16 + TWqI) / 1000000);
        QY1O = (QY1O * 16 + TWqI) % 1000000;
        JR++;
    }
    return Tf * 1000000 + QY1O;
}

int main(int XzE, char* uC[]) {
    if (XzE < 2) return 0;
    printf("%d", gwP2(uC[1]));
    return 0;
}