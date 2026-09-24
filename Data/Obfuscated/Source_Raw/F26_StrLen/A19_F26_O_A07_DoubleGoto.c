/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A19_F26_O_A07_DoubleGoto.c
 * Implementation Logic: Spaghetti-like jumps for length.
 */
#include <stdio.h>

int T(const char *pLFo) {
    int QrgX = 0;
JM1K:
    if (!*pLFo) goto MH37;
    goto cMgL;
cMgL:
    QrgX++; pLFo++;
    goto JM1K;
MH37:
    return QrgX;
}

int main(int K, char *h[]) {
    if (K < 2) return 0;
    printf("%d\n", T(h[1]));
    return 0;
}