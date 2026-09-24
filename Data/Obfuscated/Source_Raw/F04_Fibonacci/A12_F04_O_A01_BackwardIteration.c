/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A12_F04_O_A01_BackwardIteration.c
 * Implementation Logic: BackwardIteration
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long evg(int sqU2) {
    long vf = 0, wt = 1;
    if (sqU2 == 0) return 0;
    if (sqU2 == 1) return 1;
    for (int iMT8 = sqU2; iMT8 >= 2; iMT8--) {
        long PYv0 = vf + wt; vf = wt; wt = PYv0;
    }
    return wt;
}

int main(int QS, char *P[]) {
    if (QS < 2) {
        return 1;
    }
    int sqU2 = atoi(P[1]);
    if (sqU2 < 0) {
        printf("0\n");
        return 0;
    }
    long Gxbx = evg(sqU2);
    printf("%ld\n", Gxbx);
    return 0;
}
