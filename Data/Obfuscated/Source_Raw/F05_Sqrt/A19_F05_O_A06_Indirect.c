/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A19_F05_O_A06_Indirect.c
 * Implementation Logic: Bit-by-bit method using function pointers for core steps.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

typedef unsigned int (*EPmW)(unsigned int);
unsigned int usP(unsigned int X) { return X >> 1; }

int P(int IV) {
    if (IV < 0) return -1;
    unsigned int l = 0, l76c = 1 << 30;
    EPmW YFl7 = usP;
    while (l76c > (unsigned int)IV) l76c >>= 2;
    while (l76c) {
        if ((unsigned int)IV >= l + l76c) {
            IV -= (l + l76c);
            l = YFl7(l) + l76c;
        } else l = YFl7(l);
        l76c >>= 2;
    }
    return (int)l;
}

int main(int cat, char *DPI[]) {
    if (cat < 2) return 1;
    printf("%d\n", P(atoi(DPI[1])));
    return 0;
}