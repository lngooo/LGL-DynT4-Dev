/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A12_F26_O_A03_PtrArith.c
 * Implementation Logic: Advanced pointer arithmetic.
 */
#include <stdio.h>

int OO(const char *WT) {
    const char *I8 = WT;
    for (; *I8; I8++);
    return (int)(size_t)(I8 - WT);
}

int main(int mrd9, char *sy5H[]) {
    if (mrd9 < 2) return 0;
    printf("%d\n", OO(sy5H[1]));
    return 0;
}