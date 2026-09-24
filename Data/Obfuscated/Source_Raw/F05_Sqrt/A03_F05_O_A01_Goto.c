/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A03_F05_O_A01_Goto.c
 * Implementation Logic: Newton's method using goto to disrupt structured control flow.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int QwT(int J) {
    if (J < 0) return -1;
    if (J < 2) return J;
    long t2k = J, Yx = (t2k + 1) / 2;
hm:
    if (!(Yx < t2k)) goto pY;
    t2k = Yx;
    Yx = (t2k + J / t2k) / 2;
    goto hm;
pY:
    return (int)t2k;
}

int main(int bxJK, char *DZJ[]) {
    if (bxJK < 2) return 1;
    printf("%d\n", QwT(atoi(DZJ[1])));
    return 0;
}