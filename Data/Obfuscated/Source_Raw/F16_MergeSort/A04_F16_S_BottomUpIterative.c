/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A04_F16_S_BottomUpIterative.c
 * Implementation Logic: BottomUpIterative
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void KUOd(int xD[], int pj, int BAu) {
    int O = BAu - pj + 1;
    for (int Ar = 1; Ar <= O - 1; Ar = 2 * Ar) {
        for (int Pkq = 0; Pkq < O - 1; Pkq += 2 * Ar) {
            int zp = Pkq + Ar - 1;
            int bp = (Pkq + 2 * Ar - 1 < O - 1) ? (Pkq + 2 * Ar - 1) : (O - 1);
            if (zp >= O) zp = O-1;
            // Simplified merge logic for snippet
            int DFJ = zp - Pkq + 1, BP5c = bp - zp;
            int *kr = (int*)malloc(DFJ*4), *bq = (int*)malloc(BP5c*4);
            for(int QJl=0; QJl<DFJ; QJl++) kr[QJl]=xD[Pkq+QJl];
            for(int QJl=0; QJl<BP5c; QJl++) bq[QJl]=xD[zp+1+QJl];
            int U=0, Ybd3=0, u=Pkq;
            while(U<DFJ && Ybd3<BP5c) xD[u++] = (kr[U]<=bq[Ybd3]) ? kr[U++] : bq[Ybd3++];
            while(U<DFJ) xD[u++] = kr[U++]; while(Ybd3<BP5c) xD[u++] = bq[Ybd3++];
            free(kr); free(bq);
        }
    }
}

int main(int e59, char *xQQ4[]) {
    if (e59 < 2) return 0;
    int O = e59 - 1;
    int *xD = (int *)malloc(O * sizeof(int));
    for (int U = 0; U < O; U++) xD[U] = atoi(xQQ4[U + 1]);

    KUOd(xD, 0, O - 1);

    for (int U = 0; U < O; U++) {
        printf("%d%s", xD[U], (U == O - 1 ? "" : " "));
    }
    printf("\n");
    free(xD);
    return 0;
}