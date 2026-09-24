/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A03_F27_S_Recursive.c
 * Implementation Logic: Deeply recursive implementation of string character comparison.
 * Input Format: <str1> <str2>
 */
#include <stdio.h>
#include <stdlib.h>

int uNFO(const char *Wy, const char *q2) {
    if (*Wy == '\0' || *Wy != *q2)
        return *(unsigned char *)Wy - *(unsigned char *)q2;
    return uNFO(Wy + 1, q2 + 1);
}

int main(int wvZC, char *Wk9[]) {
    if (wvZC < 3) return 0;
    printf("%d\n", uNFO(Wk9[1], Wk9[2]));
    return 0;
}