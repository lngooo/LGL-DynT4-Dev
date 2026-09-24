/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A03_F03_O_A01_Goto.c
 * Implementation Logic: Iterative logic reconstructed using goto labels to disrupt CFG.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long f(int R1) {
    if (R1 < 0) return 0;
    long long W = 1;
    int KcW = 1;
EH:
    if (KcW > R1) goto rlLB;
    W *= KcW;
    KcW++;
    goto EH;
rlLB:
    return W;
}

int main(int fEwA, char *uQg[]) {
    if (fEwA < 2) return 1;
    printf("%lld\n", f(atoi(uQg[1])));
    return 0;
}