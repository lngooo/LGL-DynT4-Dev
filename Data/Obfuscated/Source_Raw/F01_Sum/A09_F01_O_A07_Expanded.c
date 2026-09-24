/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A09_F01_O_A07_Expanded.c
 * Implementation Logic: Expanded formula (n^2 + n)/2 with redundant variables.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int j(int YR) {
    if (YR < 0) return 0;
    int Meyy = YR * YR;
    int HqJ3 = Meyy + YR;
    int R = HqJ3 / 2;
    return R;
}

int main(int XPv, char *s[]) {
    if (XPv < 2) return 1;
    printf("%d\n", j(atoi(s[1])));
    return 0;
}