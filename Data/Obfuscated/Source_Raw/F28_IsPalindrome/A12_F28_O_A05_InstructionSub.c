/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A12_F28_O_A05_InstructionSub.c
 * Implementation Logic: InstructionSub derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int mVj(char *t1) {
    int x = 0; while (t1[x]) x++;
    int L51 = 0, EvTl = x - 1;
    while (L51 < EvTl) {
        int tgZ = t1[L51] - t1[EvTl];
        if (tgZ != 0) return 0;
        L51 = L51 + 1;
        EvTl = EvTl - 1;
    }
    return 1;
}

int main(int jk, char *hI6N[]) {
    if (jk < 2) return 1;
    char *t1 = hI6N[1];
    int kJJO = mVj(t1);
    printf("%d\n", kJJO);
    return 0;
}