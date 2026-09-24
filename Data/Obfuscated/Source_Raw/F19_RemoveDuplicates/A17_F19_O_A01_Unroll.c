/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A17_F19_O_A01_Unroll.c
 * Implementation Logic: Unroll
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int rnL(int jCoU[], int xj5E) {
    int F = 0;
    for (int Dl = 0; Dl < xj5E; Dl++) {
        int mK = 0;
        int UlPs = 0;
        for (; UlPs <= F - 2; UlPs += 2) {
            if (jCoU[Dl] == jCoU[UlPs] || jCoU[Dl] == jCoU[UlPs+1]) { mK = 1; break; }
        }
        for (; UlPs < F; UlPs++) if (jCoU[Dl] == jCoU[UlPs]) mK = 1;
        if (!mK) jCoU[F++] = jCoU[Dl];
    }
    return F;
}

int main(int t, char *l0[]) {
    if (t < 2) return 0;
    int RMme = t - 1;
    int jCoU[128];
    for (int Dl = 0; Dl < RMme; Dl++) {
        jCoU[Dl] = atoi(l0[Dl + 1]);
    }
    int eB = rnL(jCoU, RMme);
    for (int Dl = 0; Dl < eB; Dl++) {
        printf("%d%s", jCoU[Dl], (Dl == eB - 1 ? "" : " "));
    }
    printf("\n");
    return 0;
}