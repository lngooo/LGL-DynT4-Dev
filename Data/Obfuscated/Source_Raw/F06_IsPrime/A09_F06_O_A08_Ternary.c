/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A09_F06_O_A08_Ternary.c
 * Implementation Logic: Recursive logic using ternary operators for Token density.
 */
#include <stdio.h>
#include <stdlib.h>

int fIU(int dr, int RMMc) {
    return (RMMc * RMMc > dr) ? 1 : (dr % RMMc == 0 ? 0 : fIU(dr, RMMc + 1));
}

int m(int dr) {
    return (dr < 2) ? 0 : fIU(dr, 2);
}

int main(int En, char *t96[]) {
    if (En < 2) return 1;
    printf("%d\n", m(atoi(t96[1])));
    return 0;
}