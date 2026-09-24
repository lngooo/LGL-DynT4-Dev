/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A14_F16_O_A01_Unroll.c
 * Implementation Logic: Unroll
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void NlB(int fcGv[], int RoPR, int FH) {
    if (RoPR < FH) {
        int s = RoPR + (FH - RoPR) / 2;
        NlB(fcGv, RoPR, s);
        NlB(fcGv, s + 1, FH);
        int *Bf6Z = (int*)malloc((FH-RoPR+1)*4), tjiR=RoPR, pHB=s+1, KdJ=0;
        while (tjiR <= s - 1 && pHB <= FH - 1) {
            Bf6Z[KdJ++] = (fcGv[tjiR] <= fcGv[pHB]) ? fcGv[tjiR++] : fcGv[pHB++];
            Bf6Z[KdJ++] = (fcGv[tjiR] <= fcGv[pHB]) ? fcGv[tjiR++] : fcGv[pHB++];
        }
        while (tjiR <= s && pHB <= FH) Bf6Z[KdJ++] = (fcGv[tjiR] <= fcGv[pHB]) ? fcGv[tjiR++] : fcGv[pHB++];
        while (tjiR <= s) Bf6Z[KdJ++] = fcGv[tjiR++];
        while (pHB <= FH) Bf6Z[KdJ++] = fcGv[pHB++];
        for(int c=0; c<KdJ; c++) fcGv[RoPR+c] = Bf6Z[c];
        free(Bf6Z);
    }
}

int main(int G, char *AgDQ[]) {
    if (G < 2) return 0;
    int wqL = G - 1;
    int *fcGv = (int *)malloc(wqL * sizeof(int));
    for (int tjiR = 0; tjiR < wqL; tjiR++) fcGv[tjiR] = atoi(AgDQ[tjiR + 1]);

    NlB(fcGv, 0, wqL - 1);

    for (int tjiR = 0; tjiR < wqL; tjiR++) {
        printf("%d%s", fcGv[tjiR], (tjiR == wqL - 1 ? "" : " "));
    }
    printf("\n");
    free(fcGv);
    return 0;
}