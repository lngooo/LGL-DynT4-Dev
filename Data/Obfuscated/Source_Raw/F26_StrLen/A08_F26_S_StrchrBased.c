/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A08_F26_S_StrchrBased.c
 * Implementation Logic: Using pointer search logic (Seed 6).
 */
#include <stdio.h>

int XJDQ(const char *Q) {
    const char *WHq = Q;
    while (*WHq) {
        if (*WHq == 0) break;
        WHq++;
    }
    return (int)(WHq - Q);
}

int main(int Y, char *BPb[]) {
    if (Y < 2) return 0;
    printf("%d\n", XJDQ(BPb[1]));
    return 0;
}