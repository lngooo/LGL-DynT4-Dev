/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A07_F22_O_A01_Goto.c
 * Implementation Logic: Goto
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void MP4(int si[], int EQhQ) {
    int e = 1, InF, oCT;
xXJ:
    if (e >= EQhQ) return;
    oCT = si[e]; InF = e - 1;
PpH:
    if (InF < 0 || si[InF] <= oCT) goto uSI;
    si[InF + 1] = si[InF]; InF--; goto PpH;
uSI:
    si[InF + 1] = oCT; e++; goto xXJ;
}

int main(int d, char *AT8[]) {
    if (d < 2) return 0;
    int EQhQ = d - 1;
    int *si = (int *)malloc(EQhQ * sizeof(int));
    for (int e = 0; e < EQhQ; e++) si[e] = atoi(AT8[e + 1]);

    MP4(si, EQhQ);

    for (int e = 0; e < EQhQ; e++) {
        printf("%d%s", si[e], (e == EQhQ - 1 ? "" : " "));
    }
    printf("\n");
    free(si);
    return 0;
}