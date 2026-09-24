/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A08_F04_O_A01_GotoReconstruction.c
 * Implementation Logic: GotoReconstruction
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long S6xf(int gpBL) {
    long Hfz3 = 0, Vvo = 1, Xke;
    int H = 2;
    if (gpBL == 0) return 0;
    if (gpBL == 1) return 1;
    Xw:
    if (H > gpBL) goto U90;
    Xke = Hfz3 + Vvo; Hfz3 = Vvo; Vvo = Xke; H++;
    goto Xw;
    U90: return Vvo;
}

int main(int pg, char *qm[]) {
    if (pg < 2) {
        return 1;
    }
    int gpBL = atoi(qm[1]);
    if (gpBL < 0) {
        printf("0\n");
        return 0;
    }
    long Mj = S6xf(gpBL);
    printf("%ld\n", Mj);
    return 0;
}
