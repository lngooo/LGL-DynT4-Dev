/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A07_F28_O_A01_Goto.c
 * Implementation Logic: Goto derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int dhR(char *A) {
    int N = 0;
    while (A[N]) N++;
    int U7 = 0, xcj = N - 1;
R:
    if (U7 >= xcj) goto ay;
    if (A[U7] != A[xcj]) goto K;
    U7++; xcj--;
    goto R;
ay: return 1;
K: return 0;
}

int main(int y, char *o[]) {
    if (y < 2) return 1;
    char *A = o[1];
    int b = dhR(A);
    printf("%d\n", b);
    return 0;
}