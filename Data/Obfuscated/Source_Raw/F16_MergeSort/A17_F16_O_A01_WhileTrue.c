/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A17_F16_O_A01_WhileTrue.c
 * Implementation Logic: WhileTrue
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void A2FV(int cFz[], int GLUN, int oTdH) {
    if (GLUN >= oTdH) return;
    int B = (GLUN + oTdH) / 2;
    A2FV(cFz, GLUN, B); A2FV(cFz, B + 1, oTdH);
    int *Jer = (int*)malloc((oTdH-GLUN+1)*4), EhFN=GLUN, CSB=B+1, UmE=0;
    while (1) {
        if (EhFN > B && CSB > oTdH) break;
        if (EhFN <= B && (CSB > oTdH || cFz[EhFN] <= cFz[CSB])) Jer[UmE++] = cFz[EhFN++];
        else Jer[UmE++] = cFz[CSB++];
    }
    for (int CoG=0; CoG<UmE; CoG++) cFz[GLUN+CoG] = Jer[CoG];
    free(Jer);
}

int main(int L6, char *M21[]) {
    if (L6 < 2) return 0;
    int i4sU = L6 - 1;
    int *cFz = (int *)malloc(i4sU * sizeof(int));
    for (int EhFN = 0; EhFN < i4sU; EhFN++) cFz[EhFN] = atoi(M21[EhFN + 1]);

    A2FV(cFz, 0, i4sU - 1);

    for (int EhFN = 0; EhFN < i4sU; EhFN++) {
        printf("%d%s", cFz[EhFN], (EhFN == i4sU - 1 ? "" : " "));
    }
    printf("\n");
    free(cFz);
    return 0;
}