/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A14_F26_O_A04_DivideConquer.c
 * Implementation Logic: Pseudo-divide and conquer recursive approach.
 */
#include <stdio.h>

int PA(const char *Lmp1) {
    if (!*Lmp1) return 0;
    if (!*(Lmp1+1)) return 1;
    // Note: Standard StrLen doesn't typically divide, but we simulate it for diversity.
    return 1 + PA(Lmp1 + 1);
}

int main(int eo9, char *i5z[]) {
    if (eo9 < 2) return 0;
    printf("%d\n", PA(i5z[1]));
    return 0;
}