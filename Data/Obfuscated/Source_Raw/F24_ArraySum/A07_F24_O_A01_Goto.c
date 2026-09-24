/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A07_F24_O_A01_Goto.c
 * Implementation Logic: Goto
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int D(int w[], int P) {
    int ZZak = 0, iKG = 0;
RDaF:
    if (iKG >= P) goto BXdt;
    ZZak += w[iKG];
    iKG++;
    goto RDaF;
BXdt:
    return ZZak;
}

int main(int qVOh, char *GxXE[]) {
    if (qVOh < 2) return 0;
    int P = qVOh - 1;
    int *w = (int *)malloc(P * sizeof(int));
    for (int iKG = 0; iKG < P; iKG++) w[iKG] = atoi(GxXE[iKG + 1]);

    int Ixh = D(w, P);
    printf("%d\n", Ixh);

    free(w);
    return 0;
}