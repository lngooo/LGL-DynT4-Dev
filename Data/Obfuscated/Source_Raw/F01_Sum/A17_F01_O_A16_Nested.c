/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A17_F01_O_A16_Nested.c
 * Implementation Logic: Bitwise addition with nested calls and extra stack depth.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int V(int ddL, int G62H) {
    if (G62H == 0) return ddL;
    return V(ddL ^ G62H, (ddL & G62H) << 1);
}

int d9(int l) {
    if (l <= 0) return 0;
    return V(l, d9(l - 1));
}

int main(int M, char *R[]) {
    if (M < 2) return 1;
    printf("%d\n", d9(atoi(R[1])));
    return 0;
}