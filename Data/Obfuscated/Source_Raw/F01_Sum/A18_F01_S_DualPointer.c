/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A18_F01_S_DualPointer.c
 * Implementation Logic: Summing from both ends (1 and n) simultaneously (Seed 7).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int zh(int LM) {
    int N = 1, A = LM, qnQ = 0;
    while (N < A) {
        qnQ += (N + A);
        N++;
        A--;
    }
    if (N == A) qnQ += N;
    return qnQ;
}

int main(int pqz, char *QP[]) {
    if (pqz < 2) return 1;
    printf("%d\n", zh(atoi(QP[1])));
    return 0;
}