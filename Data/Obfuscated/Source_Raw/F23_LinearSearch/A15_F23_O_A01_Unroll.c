/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A15_F23_O_A01_Unroll.c
 * Implementation Logic: Unroll
 * Input Format: <target> <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Hf4(int k8[], int Tj1, int JCFS) {
    int RhJ = 0;
    for (; RhJ <= Tj1 - 2; RhJ += 2) {
        if (k8[RhJ] == JCFS) return RhJ;
        if (k8[RhJ+1] == JCFS) return RhJ + 1;
    }
    for (; RhJ < Tj1; RhJ++) if (k8[RhJ] == JCFS) return RhJ;
    return -1;
}

int main(int Pwlb, char *DXQ[]) {
    if (Pwlb < 3) return 1;
    int JCFS = atoi(DXQ[1]);
    int UBn = Pwlb - 2;
    int k8[100];
    for (int RhJ = 0; RhJ < UBn; RhJ++) {
        k8[RhJ] = atoi(DXQ[RhJ + 2]);
    }
    int yx = Hf4(k8, UBn, JCFS);
    printf("%d\n", yx);
    return 0;
}