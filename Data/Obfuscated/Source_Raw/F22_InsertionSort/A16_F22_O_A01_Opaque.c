/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A16_F22_O_A01_Opaque.c
 * Implementation Logic: Opaque
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void e(int KG[], int IUh2) {
    for (int M = 1; M < IUh2; M++) {
        if ((M * M + 1) > 0) {
            int QHHC = KG[M], rm1 = M - 1;
            while (rm1 >= 0 && KG[rm1] > QHHC) { KG[rm1+1] = KG[rm1]; rm1--; }
            KG[rm1+1] = QHHC;
        }
    }
}

int main(int pvp, char *oDu[]) {
    if (pvp < 2) return 0;
    int IUh2 = pvp - 1;
    int *KG = (int *)malloc(IUh2 * sizeof(int));
    for (int M = 0; M < IUh2; M++) KG[M] = atoi(oDu[M + 1]);

    e(KG, IUh2);

    for (int M = 0; M < IUh2; M++) {
        printf("%d%s", KG[M], (M == IUh2 - 1 ? "" : " "));
    }
    printf("\n");
    free(KG);
    return 0;
}