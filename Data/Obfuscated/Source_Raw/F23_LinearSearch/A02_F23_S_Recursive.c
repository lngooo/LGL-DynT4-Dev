/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A02_F23_S_Recursive.c
 * Implementation Logic: Recursive
 * Input Format: <target> <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int w(int V[], int Ue, int kGv) {
    if (Ue <= 0) return -1;
    int DOV = w(V, Ue - 1, kGv);
    if (DOV != -1) return DOV;
    return (V[Ue - 1] == kGv) ? (Ue - 1) : -1;
}

int main(int T, char *cBg[]) {
    if (T < 3) return 1;
    int kGv = atoi(cBg[1]);
    int m1J = T - 2;
    int V[100];
    for (int O = 0; O < m1J; O++) {
        V[O] = atoi(cBg[O + 2]);
    }
    int p = w(V, m1J, kGv);
    printf("%d\n", p);
    return 0;
}