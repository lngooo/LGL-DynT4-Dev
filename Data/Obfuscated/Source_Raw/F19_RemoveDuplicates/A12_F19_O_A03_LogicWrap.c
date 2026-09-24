/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A12_F19_O_A03_LogicWrap.c
 * Implementation Logic: LogicWrap
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int r(int r8w[], int pu5d) {
    int ca[128], Q = 0;
    for (int nsE = 0; nsE < pu5d; nsE++) {
        int MgB = r8w[nsE], q8 = -1, xvth = 0;
        while (++q8 < Q) if (ca[q8] == MgB) xvth = 1;
        if (!xvth) ca[Q++] = MgB;
    }
    for (int nsE = 0; nsE < Q; nsE++) r8w[nsE] = ca[nsE];
    return Q;
}

int main(int R, char *vx[]) {
    if (R < 2) return 0;
    int VXL = R - 1;
    int r8w[128];
    for (int nsE = 0; nsE < VXL; nsE++) {
        r8w[nsE] = atoi(vx[nsE + 1]);
    }
    int pPr = r(r8w, VXL);
    for (int nsE = 0; nsE < pPr; nsE++) {
        printf("%d%s", r8w[nsE], (nsE == pPr - 1 ? "" : " "));
    }
    printf("\n");
    return 0;
}