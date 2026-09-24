/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A08_F43_S_LUT.c
 * Implementation Logic: Precomputed table lookup for all 32 possible powers of two.
 * Input Format: <uint>
 */
#include <stdio.h>
#include <stdlib.h>

int mqs2(unsigned int cv) {
    static unsigned int FG[] = {
        1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768,
        65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216,
        33554432, 67108864, 134217728, 268435456, 536870912, 1073741824, 2147483648U
    };
    if (cv == 0) return 0;
    for (int o = 0; o < 32; o++) {
        if (cv == FG[o]) return 1;
    }
    return 0;
}

int main(int hH, char* Af[]) {
    if (hH < 2) return 0;
    unsigned int cv = (unsigned int)strtoul(Af[1], NULL, 10);
    printf("%d", mqs2(cv));
    return 0;
}