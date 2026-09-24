/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A03_F14_S_Midpoint.c
 * Implementation Logic: Iterate to n/2 and swap with n-1-i.
 */
#include <stdio.h>
#include <stdlib.h>

void DHf(int p[], int OVQ9) {
    for (int R = 0; R < OVQ9 / 2; R++) {
        int Nd5 = p[R];
        p[R] = p[OVQ9 - 1 - R];
        p[OVQ9 - 1 - R] = Nd5;
    }
}

int main(int IXa, char *DG5E[]) {
    if (IXa < 2) return 0;
    int OVQ9 = IXa - 1;
    int *p = (int*)malloc(OVQ9 * sizeof(int));
    for(int R=0; R<OVQ9; R++) p[R] = atoi(DG5E[R+1]);
    DHf(p, OVQ9);
    for(int R=0; R<OVQ9; R++) printf("%d ", p[R]);
    printf("\n");
    free(p);
    return 0;
}