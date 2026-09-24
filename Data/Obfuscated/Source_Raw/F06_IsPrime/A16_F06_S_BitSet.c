/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A16_F06_S_BitSet.c
 * Implementation Logic: Bit-packed primality test (Seed 8).
 */
#include <stdio.h>
#include <stdlib.h>

int ev(int XubO) {
    if (XubO < 2) return 0;
    unsigned char *YCF = (unsigned char *)calloc((XubO / 8) + 1, 1);
    for (int wJ = 2; wJ * wJ <= XubO; wJ++) {
        if (!(YCF[wJ / 8] & (1 << (wJ % 8)))) {
            for (int BlRL = wJ * wJ; BlRL <= XubO; BlRL += wJ) YCF[BlRL / 8] |= (1 << (BlRL % 8));
        }
    }
    int fXNs = !(YCF[XubO / 8] & (1 << (XubO % 8)));
    free(YCF);
    return fXNs;
}

int main(int Te, char *r[]) {
    if (Te < 2) return 1;
    printf("%d\n", ev(atoi(r[1])));
    return 0;
}