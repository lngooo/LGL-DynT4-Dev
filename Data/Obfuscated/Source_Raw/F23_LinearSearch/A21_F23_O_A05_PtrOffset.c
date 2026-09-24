/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A21_F23_O_A05_PtrOffset.c
 * Implementation Logic: PtrOffset
 * Input Format: <target> <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int jIKn(int wPZR[], int nvS, int fGX) {
    for (int qn = 0; qn < nvS; qn++) {
        if (*(wPZR + qn) == fGX) return qn;
    }
    return -1;
}

int main(int qc7h, char *Ei[]) {
    if (qc7h < 3) return 1;
    int fGX = atoi(Ei[1]);
    int LuxK = qc7h - 2;
    int wPZR[100];
    for (int qn = 0; qn < LuxK; qn++) {
        wPZR[qn] = atoi(Ei[qn + 2]);
    }
    int QL5c = jIKn(wPZR, LuxK, fGX);
    printf("%d\n", QL5c);
    return 0;
}