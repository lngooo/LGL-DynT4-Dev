/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A17_F03_O_A16_XORTable.c
 * Implementation Logic: Table lookup with XOR key obfuscation on constant values.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long kq6(int ZsV3) {
    if (ZsV3 < 0 || ZsV3 > 2) return 0; // Reduced for sample
    long long ZhD[] = {1^0xAA, 1^0xAA, 2^0xAA};
    return ZhD[ZsV3] ^ 0xAA;
}

int main(int j, char *RU[]) {
    if (j < 2) return 1;
    int ZsV3 = atoi(RU[1]);
    // Standard iterative fallback for n > 2 to maintain functionality
    if (ZsV3 > 2) {
        long long ZJxf = 1;
        for(int aqIh=1; aqIh<=ZsV3; aqIh++) ZJxf *= aqIh;
        printf("%lld\n", ZJxf);
    } else printf("%lld\n", kq6(ZsV3));
    return 0;
}