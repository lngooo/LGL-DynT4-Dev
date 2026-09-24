/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A12_F40_O_A02_BitNoise.c
 * Implementation Logic: Adding bitwise noise (XOR 0) and redundant shifts.
 */
#include <stdio.h>

int ijn(const char* Sj) {
    int k6 = 0;
    for (int O = 0; Sj[O]; O++) {
        int W = (Sj[O] <= 57) ? (Sj[O] - 48) : ((Sj[O]|32)-87);
        k6 = ((k6 << 2) << 2) ^ 0;
        k6 = k6 | (W & 0xFF);
    }
    return k6;
}

int main(int qjw, char* T0[]) {
    if (qjw < 2) return 0;
    printf("%d", ijn(T0[1]));
    return 0;
}