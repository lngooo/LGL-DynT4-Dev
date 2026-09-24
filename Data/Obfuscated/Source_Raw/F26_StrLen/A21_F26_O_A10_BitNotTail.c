/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A21_F26_O_A10_BitNotTail.c
 * Implementation Logic: Combined bitwise and pointer arithmetic.
 */
#include <stdio.h>

int Q6bn(const char *bO) {
    const char *gs6 = bO;
    while ((~(unsigned int)(unsigned char)(*gs6)) != ~0U) {
        gs6 = (const char *)((size_t)gs6 + (1U & 1U));
    }
    return (int)(gs6 - bO);
}

int main(int ZbUD, char *w0R[]) {
    if (ZbUD < 2) return 0;
    printf("%d\n", Q6bn(w0R[1]));
    return 0;
}