/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A09_F05_O_A08_ExpLog.c
 * Implementation Logic: Sqrt via exp(0.5 * log(n)) with accuracy handling.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int y3N(int p935) {
    if (p935 < 0) return -1;
    if (p935 == 0) return 0;
    double u7 = exp(0.5 * log((double)p935));
    int mWk = (int)(u7 + 0.0000000001);
    return mWk;
}

int main(int GDF4, char *Fbf[]) {
    if (GDF4 < 2) return 1;
    printf("%d\n", y3N(atoi(Fbf[1])));
    return 0;
}