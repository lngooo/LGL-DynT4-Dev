/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A07_F27_S_Unrolled.c
 * Implementation Logic: Manual loop unrolling to compare multiple characters per iteration.
 * Input Format: <str1> <str2>
 */
#include <stdio.h>
#include <stdlib.h>

int OK45(const char *VqTY, const char *ZZq) {
    for (;;) {
        if (*VqTY != *ZZq) return *(unsigned char *)VqTY - *(unsigned char *)ZZq;
        if (*VqTY == '\0') return 0;
        VqTY++; ZZq++;
        if (*VqTY != *ZZq) return *(unsigned char *)VqTY - *(unsigned char *)ZZq;
        if (*VqTY == '\0') return 0;
        VqTY++; ZZq++;
    }
}

int main(int xx57, char *uI[]) {
    if (xx57 < 3) return 0;
    printf("%d\n", OK45(uI[1], uI[2]));
    return 0;
}