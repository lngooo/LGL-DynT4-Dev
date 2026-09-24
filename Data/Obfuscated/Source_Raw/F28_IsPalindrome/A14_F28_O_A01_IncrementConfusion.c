/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A14_F28_O_A01_IncrementConfusion.c
 * Implementation Logic: IncrementConfusion derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int C5(char *F) {
    int vf4 = 0; while (F[vf4]) vf4++;
    int eli = -1, Rz6 = vf4;
    while (++eli < --Rz6) {
        if (F[eli] != F[Rz6]) return 0;
    }
    return 1;
}

int main(int h7, char *Ou[]) {
    if (h7 < 2) return 1;
    char *F = Ou[1];
    int TY8 = C5(F);
    printf("%d\n", TY8);
    return 0;
}