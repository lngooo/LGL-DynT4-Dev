/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A15_F08_O_A14_BitAdder.c
 * Implementation Logic: Bitwise negation and bitwise addition.
 */
#include <stdio.h>
#include <stdlib.h>

int f(int ZR, int TSM) {
    while (TSM != 0) {
        int jfT = ZR & TSM;
        ZR = ZR ^ TSM;
        TSM = jfT << 1;
    }
    return ZR;
}

int wz(int R) {
    if (R >= 0) return R;
    return f(~R, 1);
}

int main(int q0l, char *z[]) {
    if (q0l < 2) return 1;
    printf("%d\n", wz(atoi(z[1])));
    return 0;
}