/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A03_F06_O_A01_Goto.c
 * Implementation Logic: Logic re-mapped using goto to break structural analysis.
 */
#include <stdio.h>
#include <stdlib.h>

int f5GC(int D) {
    int GA = 2;

    if (D < 2) goto KdJD;

Ubz:
    if (GA > D / GA) goto aVn;
    if (D % GA == 0) goto KdJD;
    GA++;
    goto Ubz;

aVn:
    return 1;

KdJD:
    return 0;
}

int main(int c, char *wSeI[]) {
    if (c < 2) return 1;
    printf("%d\n", f5GC(atoi(wSeI[1])));
    return 0;
}