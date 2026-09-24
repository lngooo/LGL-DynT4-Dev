/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A12_F18_O_A01_Ternary.c
 * Implementation Logic: Ternary
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int c60x(int S[], int qM, int Rjqp, int ah) {
    if (qM >= Rjqp) return (qM == Rjqp && ah == 1) ? S[qM] : S[qM];
    int P = S[Rjqp], zTL5 = qM;
    for (int H = qM; H < Rjqp; H++) (S[H] <= P) ? ({int Bk=S[zTL5]; S[zTL5]=S[H]; S[H]=Bk; zTL5++; 0;}) : 0;
    int Bk = S[zTL5]; S[zTL5] = S[Rjqp]; S[Rjqp] = Bk;
    return (zTL5 == ah-1) ? S[zTL5] : (zTL5 > ah-1 ? c60x(S, qM, zTL5-1, ah) : c60x(S, zTL5+1, Rjqp, ah));
}

int main(int qStG, char *LtUA[]) {
    if (qStG < 3) return 0;
    int ah = atoi(LtUA[1]);
    int g = qStG - 2;
    int *S = (int *)malloc(g * sizeof(int));
    for (int zTL5 = 0; zTL5 < g; zTL5++) S[zTL5] = atoi(LtUA[zTL5 + 2]);

    // 假设 K 是从 1 开始的 (1st smallest)
    int jrV = c60x(S, 0, g - 1, ah);

    printf("%d\n", jrV);
    free(S);
    return 0;
}