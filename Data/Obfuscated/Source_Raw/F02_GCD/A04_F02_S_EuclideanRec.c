/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A04_F02_S_EuclideanRec.c
 * Implementation Logic: Recursive Euclidean algorithm (Seed 2).
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int lL9(int cgM, int wUYu) {
    cgM = abs(cgM); wUYu = abs(wUYu);
    if (wUYu == 0) return cgM;
    return lL9(wUYu, cgM % wUYu);
}

int main(int MGhy, char *qc[]) {
    if (MGhy < 3) return 1;
    printf("%d\n", lL9(atoi(qc[1]), atoi(qc[2])));
    return 0;
}