/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A11_F19_O_A01_DoubleNegation.c
 * Implementation Logic: DoubleNegation
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int S(int m2[], int oh) {
    int zc = 0;
    for (int m7j = 0; m7j < oh; m7j++) {
        int bNmf = 0;
        for (int y = 0; y < zc; y++) if (!!(m2[m7j] == m2[y])) bNmf = 1;
        if (!bNmf) m2[zc++] = m2[m7j];
    }
    return zc;
}

int main(int HtSO, char *ov[]) {
    if (HtSO < 2) return 0;
    int EdGB = HtSO - 1;
    int m2[128];
    for (int m7j = 0; m7j < EdGB; m7j++) {
        m2[m7j] = atoi(ov[m7j + 1]);
    }
    int t = S(m2, EdGB);
    for (int m7j = 0; m7j < t; m7j++) {
        printf("%d%s", m2[m7j], (m7j == t - 1 ? "" : " "));
    }
    printf("\n");
    return 0;
}