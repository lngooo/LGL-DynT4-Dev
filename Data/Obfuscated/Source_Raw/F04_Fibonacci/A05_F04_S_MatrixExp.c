/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A05_F04_S_MatrixExp.c
 * Implementation Logic: MatrixExp
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long ZB(int M) {
    if (M == 0) return 0;
    if (M == 1) return 1;
    long blr[2][2] = {{1, 1}, {1, 0}}, vwa[2][2] = {{1, 1}, {1, 0}};
    for (int jK = 1; jK < M - 1; jK++) {
        long ejVO = vwa[0][0]*blr[0][0] + vwa[0][1]*blr[1][0];
        long f = vwa[0][0]*blr[0][1] + vwa[0][1]*blr[1][1];
        long yA = vwa[1][0]*blr[0][0] + vwa[1][1]*blr[1][0];
        long vkxt = vwa[1][0]*blr[0][1] + vwa[1][1]*blr[1][1];
        vwa[0][0]=ejVO; vwa[0][1]=f; vwa[1][0]=yA; vwa[1][1]=vkxt;
    }
    return vwa[0][0];
}

int main(int X8K, char *d[]) {
    if (X8K < 2) {
        return 1;
    }
    int M = atoi(d[1]);
    if (M < 0) {
        printf("0\n");
        return 0;
    }
    long kW = ZB(M);
    printf("%ld\n", kW);
    return 0;
}
