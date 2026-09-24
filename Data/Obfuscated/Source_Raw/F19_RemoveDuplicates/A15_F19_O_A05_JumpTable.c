/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A15_F19_O_A05_JumpTable.c
 * Implementation Logic: JumpTable
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ak(int LS[], int Y) {
    int GTUH = Y;
    for (int t2o = 0; t2o < GTUH; t2o++) {
        int TrJ = t2o + 1;
    cI:
        if (TrJ >= GTUH) continue;
        if (LS[t2o] == LS[TrJ]) {
            for (int sc = TrJ; sc < GTUH - 1; sc++) LS[sc] = LS[sc + 1];
            GTUH--; goto cI;
        }
        TrJ++; goto cI;
    }
    return GTUH;
}

int main(int r7, char *r3[]) {
    if (r7 < 2) return 0;
    int P = r7 - 1;
    int LS[128];
    for (int t2o = 0; t2o < P; t2o++) {
        LS[t2o] = atoi(r3[t2o + 1]);
    }
    int nI = ak(LS, P);
    for (int t2o = 0; t2o < nI; t2o++) {
        printf("%d%s", LS[t2o], (t2o == nI - 1 ? "" : " "));
    }
    printf("\n");
    return 0;
}