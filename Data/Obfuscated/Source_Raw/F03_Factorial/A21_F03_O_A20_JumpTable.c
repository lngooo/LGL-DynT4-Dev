/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A21_F03_O_A20_JumpTable.c
 * Implementation Logic: Function pointer jump table to handle recursion states.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long Lu(int l) {
    if (l < 0) return 0;
    if (l == 0) return 1;
    long long diV = 1;
    void *HhVe[] = {&&CXxG, &&exit};
CXxG:
    if (l > 0) {
        diV *= l--;
        goto *HhVe[0];
    }
    goto *HhVe[1];
exit:
    return diV;
}

int main(int C, char *Nc[]) {
    if (C < 2) return 1;
    printf("%lld\n", Lu(atoi(Nc[1])));
    return 0;
}