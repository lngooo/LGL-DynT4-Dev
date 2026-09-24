/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A20_F23_O_A01_IncrementConfusion.c
 * Implementation Logic: IncrementConfusion
 * Input Format: <target> <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Tslr(int Ku[], int o1mr, int ls) {
    int SCq = -1;
    while (++SCq < o1mr) {
        if (Ku[SCq] == ls) return SCq;
    }
    return -1;
}

int main(int F, char *Lxw[]) {
    if (F < 3) return 1;
    int ls = atoi(Lxw[1]);
    int OR1k = F - 2;
    int Ku[100];
    for (int SCq = 0; SCq < OR1k; SCq++) {
        Ku[SCq] = atoi(Lxw[SCq + 2]);
    }
    int L = Tslr(Ku, OR1k, ls);
    printf("%d\n", L);
    return 0;
}