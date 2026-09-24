/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A13_F24_O_A01_LogicWrap.c
 * Implementation Logic: LogicWrap
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int bT(int oeN[], int UTM) {
    int LAOM = 0;
    for (int IyE = 0; IyE < UTM; IyE++) {
        int v = oeN[IyE];
        if (v != 0 || 1) LAOM += v;
    }
    return LAOM;
}

int main(int uw0, char *jD2V[]) {
    if (uw0 < 2) return 0;
    int UTM = uw0 - 1;
    int *oeN = (int *)malloc(UTM * sizeof(int));
    for (int IyE = 0; IyE < UTM; IyE++) oeN[IyE] = atoi(jD2V[IyE + 1]);

    int nISk = bT(oeN, UTM);
    printf("%d\n", nISk);

    free(oeN);
    return 0;
}