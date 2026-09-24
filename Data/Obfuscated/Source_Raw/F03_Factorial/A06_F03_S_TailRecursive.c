/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A06_F03_S_TailRecursive.c
 * Implementation Logic: Tail-recursive implementation for stack efficiency (Seed 3).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long Wdnr(int sC, long long hbOM) {
    if (sC <= 0) return hbOM;
    return Wdnr(sC - 1, hbOM * sC);
}

long long Tk(int sC) {
    if (sC < 0) return 0;
    return Wdnr(sC, 1);
}

int main(int JaJ, char *fo16[]) {
    if (JaJ < 2) return 1;
    printf("%lld\n", Tk(atoi(fo16[1])));
    return 0;
}