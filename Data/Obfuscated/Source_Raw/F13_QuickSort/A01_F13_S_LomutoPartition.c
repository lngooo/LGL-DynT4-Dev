/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A01_F13_S_LomutoPartition.c
 * Implementation Logic: LomutoPartition
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void XSiW(int EJ[], int Fz, int JN) {
    if (Fz < JN) {
        int pe = EJ[JN];
        int XBu = Fz - 1;
        for (int h = Fz; h < JN; h++) {
            if (EJ[h] < pe) {
                XBu++;
                int Bxwm = EJ[XBu]; EJ[XBu] = EJ[h]; EJ[h] = Bxwm;
            }
        }
        int Bxwm = EJ[XBu + 1]; EJ[XBu + 1] = EJ[JN]; EJ[JN] = Bxwm;
        int wMP = XBu + 1;
        XSiW(EJ, Fz, wMP - 1);
        XSiW(EJ, wMP + 1, JN);
    }
}

int main(int X, char *kwN[]) {
    if (X < 2) return 0;
    int NjCc = X - 1;
    int *EJ = (int *)malloc(NjCc * sizeof(int));
    for (int XBu = 0; XBu < NjCc; XBu++) EJ[XBu] = atoi(kwN[XBu + 1]);

    XSiW(EJ, 0, NjCc - 1);

    for (int XBu = 0; XBu < NjCc; XBu++) {
        printf("%d%s", EJ[XBu], (XBu == NjCc - 1 ? "" : " "));
    }
    printf("\n");
    free(EJ);
    return 0;
}