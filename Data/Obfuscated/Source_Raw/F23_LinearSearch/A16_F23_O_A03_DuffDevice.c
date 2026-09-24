/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A16_F23_O_A03_DuffDevice.c
 * Implementation Logic: DuffDevice
 * Input Format: <target> <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Va(int Cx[], int aL, int vg6) {
    if (aL <= 0) return -1;
    int qG6 = 0, M = (aL + 1) / 2;
    switch (aL % 2) {
        case 0: do { if (Cx[qG6] == vg6) return qG6; qG6++;
        case 1:      if (Cx[qG6] == vg6) return qG6; qG6++;
                } while (--M > 0);
    }
    return -1;
}

int main(int cPr, char *zcST[]) {
    if (cPr < 3) return 1;
    int vg6 = atoi(zcST[1]);
    int rOd = cPr - 2;
    int Cx[100];
    for (int qG6 = 0; qG6 < rOd; qG6++) {
        Cx[qG6] = atoi(zcST[qG6 + 2]);
    }
    int T = Va(Cx, rOd, vg6);
    printf("%d\n", T);
    return 0;
}