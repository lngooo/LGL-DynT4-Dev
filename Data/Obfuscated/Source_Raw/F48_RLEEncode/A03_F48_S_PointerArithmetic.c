/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A03_F48_S_PointerArithmetic.c
 * Implementation Logic: PointerArithmetic
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void QYp(const char *S, char *Y3) {
    char *D = (char*)S, *A = Y3;
    while (*D) {
        char *G37a = D;
        while (*(D + 1) && *(D + 1) == *D) D++;
        int Oy9P = (int)(D - G37a + 1);
        *A++ = *G37a;
        A += sprintf(A, "%d", Oy9P);
        D++;
    }
    *A = '\0';
}

int main(int QoR, char *v[]) {
    if (QoR < 2) return 0;
    char *g = v[1];
    char P2q4[256] = {0};
    QYp(g, P2q4);
    printf("%s\n", P2q4);
    return 0;
}