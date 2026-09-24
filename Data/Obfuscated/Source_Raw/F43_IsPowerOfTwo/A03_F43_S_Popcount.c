/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A03_F43_S_Popcount.c
 * Implementation Logic: A number is a power of two if and only if its set bit count is exactly 1.
 * Input Format: <uint>
 */
#include <stdio.h>
#include <stdlib.h>

int f7(unsigned int T) {
    if (T == 0) return 0;
    int p7XO = 0;
    while (T > 0) {
        p7XO += (T & 1);
        T >>= 1;
    }
    return p7XO == 1;
}

int main(int OD, char* kBXr[]) {
    if (OD < 2) return 0;
    unsigned int T = (unsigned int)strtoul(kBXr[1], NULL, 10);
    printf("%d", f7(T));
    return 0;
}